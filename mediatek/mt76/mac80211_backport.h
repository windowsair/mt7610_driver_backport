#include <linux/kallsyms.h>
#include <linux/ieee80211.h>

#include "../../../../../net/mac80211/sta_info.h"

static const int ieee802_1d_to_ac[8] = {
	IEEE80211_AC_BE,
	IEEE80211_AC_BK,
	IEEE80211_AC_BK,
	IEEE80211_AC_BE,
	IEEE80211_AC_VI,
	IEEE80211_AC_VI,
	IEEE80211_AC_VO,
	IEEE80211_AC_VO
};

static inline int ieee80211_ac_from_tid(int tid)
{
	return ieee802_1d_to_ac[tid & 7];
}

#define NUM_NL80211_BANDS 3


#if defined IEEE80211_WMM_IE_STA_QOSINFO_AC_VO
#undef IEEE80211_WMM_IE_STA_QOSINFO_AC_VO
#endif

#if defined IEEE80211_WMM_IE_STA_QOSINFO_AC_VI
#undef IEEE80211_WMM_IE_STA_QOSINFO_AC_VI
#endif

#if defined IEEE80211_WMM_IE_STA_QOSINFO_AC_BK
#undef IEEE80211_WMM_IE_STA_QOSINFO_AC_BK
#endif

#if defined IEEE80211_WMM_IE_STA_QOSINFO_AC_BE
#undef IEEE80211_WMM_IE_STA_QOSINFO_AC_BE
#endif

#define IEEE80211_WMM_IE_STA_QOSINFO_AC_VO	(1<<0)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_VI	(1<<1)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_BK	(1<<2)
#define IEEE80211_WMM_IE_STA_QOSINFO_AC_BE	(1<<3)

static const u8 ieee80211_ac_to_qos_mask[4] = {
	IEEE80211_WMM_IE_STA_QOSINFO_AC_VO,
	IEEE80211_WMM_IE_STA_QOSINFO_AC_VI,
	IEEE80211_WMM_IE_STA_QOSINFO_AC_BE,
	IEEE80211_WMM_IE_STA_QOSINFO_AC_BK
};


static void (*fn_ieee80211_sta_ps_deliver_uapsd)(struct sta_info *sta);

static void ieee80211_sta_uapsd_trigger(struct ieee80211_sta *pubsta, u8 tid)
{
	struct sta_info *sta = container_of(pubsta, struct sta_info, sta);
	int ac = ieee80211_ac_from_tid(tid);

	/*
	 * If this AC is not trigger-enabled do nothing unless the
	 * driver is calling us after it already checked.
	 *
	 * NB: This could/should check a separate bitmap of trigger-
	 * enabled queues, but for now we only implement uAPSD w/o
	 * TSPEC changes to the ACs, so they're always the same.
	 */
	if (!(sta->sta.uapsd_queues & ieee80211_ac_to_qos_mask[ac]) &&
	    tid != IEEE80211_NUM_TIDS)
		return;

	/* if we are in a service period, do nothing */
	if (test_sta_flag(sta, WLAN_STA_SP))
		return;

	if (!test_sta_flag(sta, WLAN_STA_PS_DRIVER)) {
		if (fn_ieee80211_sta_ps_deliver_uapsd == NULL) {
			 fn_ieee80211_sta_ps_deliver_uapsd = (void (*)(struct sta_info *sta))kallsyms_lookup_name("ieee80211_sta_ps_deliver_uapsd");
		}
		if (fn_ieee80211_sta_ps_deliver_uapsd) {
			fn_ieee80211_sta_ps_deliver_uapsd(sta);
		}
	}
	else
		set_sta_flag(sta, WLAN_STA_UAPSD);
}


static inline bool ieee80211_is_frag(struct ieee80211_hdr *hdr)
{
	return ieee80211_has_morefrags(hdr->frame_control) ||
	       hdr->seq_ctrl & cpu_to_le16(IEEE80211_SCTL_FRAG);
}


static bool cfg80211_does_bw_fit_range(const struct ieee80211_freq_range *freq_range,
				u32 center_freq_khz, u32 bw_khz)
{
	u32 start_freq_khz, end_freq_khz;

	start_freq_khz = center_freq_khz - (bw_khz / 2);
	end_freq_khz = center_freq_khz + (bw_khz / 2);

	if (start_freq_khz >= freq_range->start_freq_khz &&
	    end_freq_khz <= freq_range->end_freq_khz)
		return true;

	return false;
}


static bool wiphy_freq_limits_valid_chan(struct wiphy *wiphy,
					 struct ieee80211_freq_range *freq_limits,
					 unsigned int n_freq_limits,
					 struct ieee80211_channel *chan)
{
	u32 bw = MHZ_TO_KHZ(20);
	int i;

	for (i = 0; i < n_freq_limits; i++) {
		struct ieee80211_freq_range *limit = &freq_limits[i];

		if (cfg80211_does_bw_fit_range(limit,
					       MHZ_TO_KHZ(chan->center_freq),
					       bw))
			return true;
	}

	return false;
}

static void wiphy_freq_limits_apply(struct wiphy *wiphy,
				    struct ieee80211_freq_range *freq_limits,
				    unsigned int n_freq_limits)
{
	enum nl80211_band band;
	int i;

	if (WARN_ON(!n_freq_limits))
		return;

	for (band = 0; band < NUM_NL80211_BANDS; band++) {
		struct ieee80211_supported_band *sband = wiphy->bands[band];

		if (!sband)
			continue;

		for (i = 0; i < sband->n_channels; i++) {
			struct ieee80211_channel *chan = &sband->channels[i];

			if (chan->flags & IEEE80211_CHAN_DISABLED)
				continue;

			if (!wiphy_freq_limits_valid_chan(wiphy, freq_limits,
							  n_freq_limits,
							  chan)) {
				pr_debug("Disabling freq %d MHz as it's out of OF limits\n",
					 chan->center_freq);
				chan->flags |= IEEE80211_CHAN_DISABLED;
			}
		}
	}
}

static void wiphy_read_of_freq_limits(struct wiphy *wiphy)
{
	struct device *dev = wiphy_dev(wiphy);
	struct device_node *np;
	struct property *prop;
	struct ieee80211_freq_range *freq_limits;
	unsigned int n_freq_limits;
	const __be32 *p;
	int len, i;
	int err = 0;

	if (!dev)
		return;
	np = dev_of_node(dev);
	if (!np)
		return;

	prop = of_find_property(np, "ieee80211-freq-limit", &len);
	if (!prop)
		return;

	if (!len || len % sizeof(u32) || len / sizeof(u32) % 2) {
		dev_err(dev, "ieee80211-freq-limit wrong format");
		return;
	}
	n_freq_limits = len / sizeof(u32) / 2;

	freq_limits = kcalloc(n_freq_limits, sizeof(*freq_limits), GFP_KERNEL);
	if (!freq_limits) {
		err = -ENOMEM;
		goto out_kfree;
	}

	p = NULL;
	for (i = 0; i < n_freq_limits; i++) {
		struct ieee80211_freq_range *limit = &freq_limits[i];

		p = of_prop_next_u32(prop, p, &limit->start_freq_khz);
		if (!p) {
			err = -EINVAL;
			goto out_kfree;
		}

		p = of_prop_next_u32(prop, p, &limit->end_freq_khz);
		if (!p) {
			err = -EINVAL;
			goto out_kfree;
		}

		if (!limit->start_freq_khz ||
		    !limit->end_freq_khz ||
		    limit->start_freq_khz >= limit->end_freq_khz) {
			err = -EINVAL;
			goto out_kfree;
		}
	}

	wiphy_freq_limits_apply(wiphy, freq_limits, n_freq_limits);

out_kfree:
	kfree(freq_limits);
	if (err)
		dev_err(dev, "Failed to get limits: %d\n", err);
}

static void (*fn_ieee80211_sta_ps_deliver_poll_response)(struct sta_info *sta);

static void ieee80211_sta_pspoll(struct ieee80211_sta *pubsta)
{
	struct sta_info *sta = container_of(pubsta, struct sta_info, sta);

	if (test_sta_flag(sta, WLAN_STA_SP))
		return;

	if (!test_sta_flag(sta, WLAN_STA_PS_DRIVER)) {
		if (fn_ieee80211_sta_ps_deliver_poll_response == NULL) {
			fn_ieee80211_sta_ps_deliver_poll_response = (void (*)(struct sta_info *sta))kallsyms_lookup_name("ieee80211_sta_ps_deliver_poll_response");
		}
		if (fn_ieee80211_sta_ps_deliver_poll_response) {
			fn_ieee80211_sta_ps_deliver_poll_response(sta);
		}

	}
	else
		set_sta_flag(sta, WLAN_STA_PSPOLL);
}
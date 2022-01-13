#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x8446f285, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xf281399f, __VMLINUX_SYMBOL_STR(ieee80211_rx_napi) },
	{ 0x43d46ccb, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xefd66a9c, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4b31eba0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xbcbfcce3, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x74d9a64b, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x3080c95c, __VMLINUX_SYMBOL_STR(__mt76_poll) },
	{ 0x4c431287, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x268ab2fb, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb55ae5e1, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x1c26e0e6, __VMLINUX_SYMBOL_STR(node_data) },
	{ 0x15a6d900, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcc2e7050, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1f504cce, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x448eac3e, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x259aade3, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xab757cde, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xae99e3, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x962e021d, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0xa26b4578, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0xdf203fe3, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x4c8f6bae, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x67865ae2, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1ecfd3c6, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xb411ab2c, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x2a4d2f23, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x3d8db0cb, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2c944f51, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd950588d, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0xcc916cc0, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x3b0e3da, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x1d7d1e2c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x8ee6f08e, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x54a4de19, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3a78bc32, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0xaa349522, __VMLINUX_SYMBOL_STR(__mt76_poll_msec) },
	{ 0xbc8e19ca, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x5f5b9192, __VMLINUX_SYMBOL_STR(usb_poison_urb) },
	{ 0xcc3a0df0, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0xc1f6fda1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x71fbad53, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xeab6a91a, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0xf98e0314, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x6f39ec60, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x45e9d714, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x154da88, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xb43c43ba, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x4550c333, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x65220c6f, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x62bf7e0f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2463f7d, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xdda2008d, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x666ab8d0, __VMLINUX_SYMBOL_STR(mt76_wcid_alloc) },
	{ 0x42c7c9fd, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x283d699e, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6a1cb9e9, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x24d95441, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x1946141e, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x85815783, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xf75990b1, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x79a38e61, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xaa22ac2e, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x5f992cfa, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x1b7b2fc1, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0xb9af161b, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0x201d285, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x31049882, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x79c86faf, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xc54537d8, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x7931771b, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0x660e0180, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x3655defd, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x3c4062eb, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe4a6528e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0x3c9ef2ec, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0x6258f8a7, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x75775a13, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x9cf48ed, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x2dcef0c6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x543cfdec, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1601f46b, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0xb0e602eb, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9be17ea3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xe4d33215, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x5b6ddf91, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_noskb) },
	{ 0x4e296ac9, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf9df7e2d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x53f6ffbc, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x4f855bd4, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf2ef7e91, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0x514affc1, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x46af8bae, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x165985e7, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x5e4aa087, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,mt76,cfg80211";

MODULE_ALIAS("usb:v148Fp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p003Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pA711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pB711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp761Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp760Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17D1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p17DBd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0075d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2019pAB31d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3D02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0586p3425d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07B8p7610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04BBp0951d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v293Cp5702d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20F4p806Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v7392pC711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0079d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2357p0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E8Dp7630d*dc*dsc*dp*icFFisc02ipFFin*");
MODULE_ALIAS("usb:v0E8Dp7650d*dc*dsc*dp*icFFisc02ipFFin*");

MODULE_INFO(srcversion, "EB0FE0D1E937773F8902D64");

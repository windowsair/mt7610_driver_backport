#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xefd66a9c, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0xca9a44ef, __VMLINUX_SYMBOL_STR(init_dummy_netdev) },
	{ 0xda3e43d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock) },
	{ 0x4b31eba0, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xbcbfcce3, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x2b2a5bc0, __VMLINUX_SYMBOL_STR(debugfs_create_u8) },
	{ 0xef6a06aa, __VMLINUX_SYMBOL_STR(ieee80211_sta_ps_transition) },
	{ 0x1fe912f1, __VMLINUX_SYMBOL_STR(netdev_alloc_frag) },
	{ 0x19f462ab, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x268ab2fb, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xcc2e7050, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x259aade3, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x6f8c9737, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x962e021d, __VMLINUX_SYMBOL_STR(trace_event_buffer_reserve) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x51685dee, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x15ba50a6, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xb411ab2c, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x2a4d2f23, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf08c67de, __VMLINUX_SYMBOL_STR(napi_alloc_frag) },
	{ 0x2c944f51, __VMLINUX_SYMBOL_STR(debugfs_create_u32) },
	{ 0xd950588d, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x227df207, __VMLINUX_SYMBOL_STR(devm_led_classdev_register) },
	{ 0xd4d6056d, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x926f6732, __VMLINUX_SYMBOL_STR(ieee80211_tx_dequeue) },
	{ 0x1d7d1e2c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x54a4de19, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x3ee7372b, __VMLINUX_SYMBOL_STR(ieee80211_sta_pspoll) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xbc8e19ca, __VMLINUX_SYMBOL_STR(trace_event_reg) },
	{ 0x5792f848, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x7e12f5c9, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0xdc3fcbc9, __VMLINUX_SYMBOL_STR(__sw_hweight8) },
	{ 0xf98e0314, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0x77b1a024, __VMLINUX_SYMBOL_STR(debugfs_create_file_unsafe) },
	{ 0xb43c43ba, __VMLINUX_SYMBOL_STR(devm_kmemdup) },
	{ 0x4550c333, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0xb5848bae, __VMLINUX_SYMBOL_STR(__iowrite32_copy) },
	{ 0xae2df64c, __VMLINUX_SYMBOL_STR(build_skb) },
	{ 0x67ce9402, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x62bf7e0f, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x6a1cb9e9, __VMLINUX_SYMBOL_STR(trace_event_ignore_this_pid) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xfb1b38fb, __VMLINUX_SYMBOL_STR(debugfs_create_devm_seqfile) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0x8f361df6, __VMLINUX_SYMBOL_STR(ieee80211_sta_uapsd_trigger) },
	{ 0x7976dfe6, __VMLINUX_SYMBOL_STR(ieee80211_sta_set_buffered) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x55f97e4f, __VMLINUX_SYMBOL_STR(ieee80211_get_key_rx_seq) },
	{ 0xaa22ac2e, __VMLINUX_SYMBOL_STR(ieee80211_send_bar) },
	{ 0x1b7b2fc1, __VMLINUX_SYMBOL_STR(ieee80211_get_tx_rates) },
	{ 0x96d9c247, __VMLINUX_SYMBOL_STR(napi_complete_done) },
	{ 0xb9af161b, __VMLINUX_SYMBOL_STR(trace_event_buffer_commit) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xc54537d8, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x7931771b, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x4210c0f2, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x3655defd, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0xe4a6528e, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xb2248136, __VMLINUX_SYMBOL_STR(debugfs_create_blob) },
	{ 0x3c9ef2ec, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0x42bb8d80, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x53569707, __VMLINUX_SYMBOL_STR(this_cpu_off) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x600c4f8e, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x6fbf07cd, __VMLINUX_SYMBOL_STR(__free_page_frag) },
	{ 0x543cfdec, __VMLINUX_SYMBOL_STR(trace_raw_output_prep) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1601f46b, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x9be17ea3, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x436c2179, __VMLINUX_SYMBOL_STR(iowrite32) },
	{ 0xf9df7e2d, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf2ef7e91, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xb8eee35c, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xe484e35f, __VMLINUX_SYMBOL_STR(ioread32) },
	{ 0x165985e7, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x5827be63, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211";


MODULE_INFO(srcversion, "853F6693F8CD66C47F3FBD4");

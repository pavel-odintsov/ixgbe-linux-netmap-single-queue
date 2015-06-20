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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2ab9dba5, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2c7ad0a9, __VMLINUX_SYMBOL_STR(alloc_pages_current) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x840f0339, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x98cdb7e3, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x8733c9e1, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb7cb1648, __VMLINUX_SYMBOL_STR(pci_bus_read_config_byte) },
	{ 0xd2b09ce5, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x93087e39, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc4dc87, __VMLINUX_SYMBOL_STR(timecounter_init) },
	{ 0x64a47d73, __VMLINUX_SYMBOL_STR(dcb_ieee_setapp) },
	{ 0xc61d1940, __VMLINUX_SYMBOL_STR(pci_enable_sriov) },
	{ 0x619cb7dd, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x463e15d7, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xef771956, __VMLINUX_SYMBOL_STR(dcb_ieee_delapp) },
	{ 0x754d539c, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x76afc7a6, __VMLINUX_SYMBOL_STR(pci_sriov_set_totalvfs) },
	{ 0x67f86646, __VMLINUX_SYMBOL_STR(skb_pad) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x7fc806d9, __VMLINUX_SYMBOL_STR(napi_gro_flush) },
	{ 0xc4f331c6, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xf32f71a0, __VMLINUX_SYMBOL_STR(dma_set_mask) },
	{ 0xd5e7a614, __VMLINUX_SYMBOL_STR(napi_complete) },
	{ 0x6bca280, __VMLINUX_SYMBOL_STR(napi_hash_del) },
	{ 0xaf71098e, __VMLINUX_SYMBOL_STR(pci_disable_device) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xc75bded5, __VMLINUX_SYMBOL_STR(pci_disable_msix) },
	{ 0xff1b5b65, __VMLINUX_SYMBOL_STR(hwmon_device_unregister) },
	{ 0x4ea25709, __VMLINUX_SYMBOL_STR(dql_reset) },
	{ 0x1a5f6a16, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x1637ff0f, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xeece3a5, __VMLINUX_SYMBOL_STR(pci_disable_sriov) },
	{ 0xc87bba4d, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xc0a3d105, __VMLINUX_SYMBOL_STR(find_next_bit) },
	{ 0x5fbe341e, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x88bfa7e, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x3fec048f, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xa252bb78, __VMLINUX_SYMBOL_STR(x86_dma_fallback_dev) },
	{ 0x949f7342, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xc7314b58, __VMLINUX_SYMBOL_STR(driver_for_each_device) },
	{ 0xee0f75e4, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xeae3dfd6, __VMLINUX_SYMBOL_STR(__const_udelay) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7e7f0701, __VMLINUX_SYMBOL_STR(pci_bus_write_config_word) },
	{ 0x2447533c, __VMLINUX_SYMBOL_STR(ktime_get_real) },
	{ 0x6f577053, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x4629334c, __VMLINUX_SYMBOL_STR(__preempt_count) },
	{ 0xb5aa7165, __VMLINUX_SYMBOL_STR(dma_pool_destroy) },
	{ 0x7a2af7b4, __VMLINUX_SYMBOL_STR(cpu_number) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x1ec1089d, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xa193da1a, __VMLINUX_SYMBOL_STR(pci_dev_driver) },
	{ 0x7292bd6b, __VMLINUX_SYMBOL_STR(netif_napi_del) },
	{ 0x2c765eec, __VMLINUX_SYMBOL_STR(sock_queue_err_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x733c3b54, __VMLINUX_SYMBOL_STR(kasprintf) },
	{ 0x190b5c8d, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x27c33efe, __VMLINUX_SYMBOL_STR(csum_ipv6_magic) },
	{ 0xbe561acf, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x975568fa, __VMLINUX_SYMBOL_STR(ptp_clock_unregister) },
	{ 0xc671e369, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x1f1824d8, __VMLINUX_SYMBOL_STR(pci_set_master) },
	{ 0x5ba82c39, __VMLINUX_SYMBOL_STR(dca3_get_tag) },
	{ 0xb427e89b, __VMLINUX_SYMBOL_STR(ptp_clock_event) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xd6eace10, __VMLINUX_SYMBOL_STR(dcb_getapp) },
	{ 0x1732200f, __VMLINUX_SYMBOL_STR(dcb_setapp) },
	{ 0xf4f2721e, __VMLINUX_SYMBOL_STR(pci_enable_pcie_error_reporting) },
	{ 0xac34ecec, __VMLINUX_SYMBOL_STR(dca_register_notify) },
	{ 0xa8f98490, __VMLINUX_SYMBOL_STR(pci_restore_state) },
	{ 0x1a33ab9, __VMLINUX_SYMBOL_STR(dca_unregister_notify) },
	{ 0xaf9536f7, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x233d27b0, __VMLINUX_SYMBOL_STR(dev_addr_del) },
	{ 0x2e0d92e, __VMLINUX_SYMBOL_STR(netif_set_xps_queue) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x161571df, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x449ad0a7, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa00aca2a, __VMLINUX_SYMBOL_STR(dql_completed) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xa6624490, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9166fada, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x49dd2339, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x28492bea, __VMLINUX_SYMBOL_STR(netif_receive_skb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x645c51f1, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0x2f6f592c, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xbcca0fc5, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x87a2e5cd, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0xaea3e483, __VMLINUX_SYMBOL_STR(netif_napi_add) },
	{ 0x2a37d074, __VMLINUX_SYMBOL_STR(dma_pool_free) },
	{ 0x597219cf, __VMLINUX_SYMBOL_STR(dcb_ieee_getapp_mask) },
	{ 0x93142c33, __VMLINUX_SYMBOL_STR(ptp_clock_register) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x73b4e48d, __VMLINUX_SYMBOL_STR(dca_add_requester) },
	{ 0xabb5501a, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9d1a62d0, __VMLINUX_SYMBOL_STR(simple_open) },
	{ 0x40ba8e4f, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x3c2dc5ca, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x74954462, __VMLINUX_SYMBOL_STR(timecounter_read) },
	{ 0xeee92536, __VMLINUX_SYMBOL_STR(pci_find_capability) },
	{ 0xa07ef116, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x571900c, __VMLINUX_SYMBOL_STR(pci_select_bars) },
	{ 0xc0bf6ead, __VMLINUX_SYMBOL_STR(timecounter_cyc2time) },
	{ 0x1bb9fa9e, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x8b8ea551, __VMLINUX_SYMBOL_STR(napi_gro_receive) },
	{ 0x6adf1c95, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x78764f4e, __VMLINUX_SYMBOL_STR(pv_irq_ops) },
	{ 0x219d595b, __VMLINUX_SYMBOL_STR(dev_addr_add) },
	{ 0x729123a9, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x85fa538b, __VMLINUX_SYMBOL_STR(pci_disable_link_state) },
	{ 0x618911fc, __VMLINUX_SYMBOL_STR(numa_node) },
	{ 0x1bd331d, __VMLINUX_SYMBOL_STR(netif_device_detach) },
	{ 0xa062070c, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x42c8de35, __VMLINUX_SYMBOL_STR(ioremap_nocache) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xa568c37e, __VMLINUX_SYMBOL_STR(pci_enable_msix_range) },
	{ 0xb1281625, __VMLINUX_SYMBOL_STR(pci_bus_read_config_word) },
	{ 0xbea27339, __VMLINUX_SYMBOL_STR(__napi_schedule) },
	{ 0x42551741, __VMLINUX_SYMBOL_STR(pci_bus_read_config_dword) },
	{ 0xba63339c, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6deea4a7, __VMLINUX_SYMBOL_STR(pci_cleanup_aer_uncorrect_error_status) },
	{ 0xdb7305a1, __VMLINUX_SYMBOL_STR(__stack_chk_fail) },
	{ 0xb152d87d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x17673717, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xbe511a43, __VMLINUX_SYMBOL_STR(napi_hash_add) },
	{ 0xa88293e1, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_add) },
	{ 0x34aac631, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x771cf835, __VMLINUX_SYMBOL_STR(dma_pool_alloc) },
	{ 0x32a009e5, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
	{ 0x6c3fdb73, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xe688a03f, __VMLINUX_SYMBOL_STR(netdev_features_change) },
	{ 0xd481330a, __VMLINUX_SYMBOL_STR(pci_enable_msi_range) },
	{ 0x6a0750ca, __VMLINUX_SYMBOL_STR(pci_unregister_driver) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x20705009, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd52bf1ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5ecfeec6, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xa1d73dcc, __VMLINUX_SYMBOL_STR(pci_set_power_state) },
	{ 0xc0fa225e, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xbb4f4766, __VMLINUX_SYMBOL_STR(simple_write_to_buffer) },
	{ 0x47e24f1d, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x51089bed, __VMLINUX_SYMBOL_STR(pci_disable_pcie_error_reporting) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x170c2011, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x20b2bb2d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc7c5638, __VMLINUX_SYMBOL_STR(ptp_clock_index) },
	{ 0x15318589, __VMLINUX_SYMBOL_STR(pci_disable_msi) },
	{ 0xa5bed252, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0x7ca135f1, __VMLINUX_SYMBOL_STR(skb_add_rx_frag) },
	{ 0xd79a2d34, __VMLINUX_SYMBOL_STR(pci_num_vf) },
	{ 0xedc03953, __VMLINUX_SYMBOL_STR(iounmap) },
	{ 0xfd8091ac, __VMLINUX_SYMBOL_STR(pci_prepare_to_sleep) },
	{ 0x79ae72b6, __VMLINUX_SYMBOL_STR(__pci_register_driver) },
	{ 0xa8721b97, __VMLINUX_SYMBOL_STR(system_state) },
	{ 0xdc934606, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xb352177e, __VMLINUX_SYMBOL_STR(find_first_bit) },
	{ 0xaf67dabf, __VMLINUX_SYMBOL_STR(pci_get_device) },
	{ 0x4cbbd171, __VMLINUX_SYMBOL_STR(__bitmap_weight) },
	{ 0xfdb42b92, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xffe63c2f, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x640a6caa, __VMLINUX_SYMBOL_STR(ndo_dflt_bridge_getlink) },
	{ 0x55f5019b, __VMLINUX_SYMBOL_STR(__kmalloc_node) },
	{ 0xbb1d53c0, __VMLINUX_SYMBOL_STR(pci_dev_put) },
	{ 0x2e0d2f7f, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xe8ec5535, __VMLINUX_SYMBOL_STR(pci_vfs_assigned) },
	{ 0x9e0c711d, __VMLINUX_SYMBOL_STR(vzalloc_node) },
	{ 0x28318305, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x45453d19, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x972f6c11, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xa79eeac, __VMLINUX_SYMBOL_STR(dca_remove_requester) },
	{ 0xaa8cd82b, __VMLINUX_SYMBOL_STR(pci_enable_device_mem) },
	{ 0x866a7f92, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x62cc8289, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x5dc6550e, __VMLINUX_SYMBOL_STR(pci_wake_from_d3) },
	{ 0x100b7a78, __VMLINUX_SYMBOL_STR(pci_release_selected_regions) },
	{ 0x7cf8b079, __VMLINUX_SYMBOL_STR(pci_request_selected_regions) },
	{ 0xca7903a1, __VMLINUX_SYMBOL_STR(irq_set_affinity_hint) },
	{ 0xb5419b40, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x682db8b1, __VMLINUX_SYMBOL_STR(dma_pool_create) },
	{ 0xe8e687ca, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x3940d6dc, __VMLINUX_SYMBOL_STR(hwmon_device_register) },
	{ 0x32792cd8, __VMLINUX_SYMBOL_STR(pci_find_ext_capability) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9e7d6bd0, __VMLINUX_SYMBOL_STR(__udelay) },
	{ 0xa5407cad, __VMLINUX_SYMBOL_STR(dma_ops) },
	{ 0xa61149e8, __VMLINUX_SYMBOL_STR(pcie_capability_read_word) },
	{ 0x382335cc, __VMLINUX_SYMBOL_STR(device_set_wakeup_enable) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x90c0bfb8, __VMLINUX_SYMBOL_STR(pci_save_state) },
	{ 0x91684f7d, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0xeab5219a, __VMLINUX_SYMBOL_STR(netdev_crit) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ptp,dca";

MODULE_ALIAS("pci:v00008086d000010B6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010C8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000150Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DDsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010ECsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010DBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001508sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F7sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FCsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001517sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010FBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001507sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001514sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000152Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001529sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000151Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d000010F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001528sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001557sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000154Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001558sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00001560sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "76C820F0204DA3FD5E97593");

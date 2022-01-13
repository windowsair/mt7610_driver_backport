A backport of the mediatek MT7610 driver that was introduced on Linux kernel v4.16

Test env:
- Ubuntu 16.04 with kernel v4.4.262
- device: 0e8d:7610 (MT7610U)

Probably available for v4.4.x - v4.16.x

I'm a noob in linux driver, and the availability of this driver is not guaranteed.

### How to use

The original version is part of Linux Kernel, replace the files in the kernel at the following paths: `drivers/net/wireless/mediatek`

It may be necessary to change the makefile in the parent directory: `drivers/net/wireless/Makefile`:
```
#old version
#obj-$(CONFIG_WL_MEDIATEK)	+= mediatek/

# change to...
obj-$(CONFIG_WLAN_VENDOR_MEDIATEK)      += mediatek/
```

Run `make menuconfig` to enable MT76x0 driver build.

> Device Drivers > Network device support > Wireless LAN > MediaTek devices

Run `make modules` to build driver as kernel module.

Run `make modules_install` to install .ko file.

----

There must be a better way to compile it, I'm just doing this for convenience.


### Related work

https://github.com/openwrt/mt76/issues/454
https://bugs.launchpad.net/ubuntu/+source/linux/+bug/1716301/comments/53

This solves the problem of failed vendor requests and failed firmware uploads.

It only applies to some devices and is still an issue even on newer kernel versions like Ubuntu 21.04.


### Known Issue

- Tx AMSPDU not supported. It is limited by the old mac80211 stack and may affect throughput.

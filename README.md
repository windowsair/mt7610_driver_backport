A backport of the mediatek MT7610 driver that was introduced on Linux kernel v4.16

Test env:
- Ubuntu 16.04 with kernel v4.4.262 (4.4.0-210-generic)
- device: 0e8d:7610 (MT7610U)

Probably available for v4.4.x - v4.16.x
The mt76x0 and mt76x2 series are also theoretically supported.

I'm a noob in linux driver, and the availability of this driver is not guaranteed.

## How to use

If the kernel version is low, some additional operations are required. There are two methods of building , one is build as extra module, and the other is build with kernel.


### Build as extra module

This approach will using the Makefile in the root directory.

It may be required to build the original kernel of your system. This depends on your kernel version, as some mac80211 features are missing on older versions.
```
$ uname -r
4.4.0-210-generic
```

Possible way to get the current version of the source code on Ubuntu: https://askubuntu.com/a/938955


Then amend [mac80211_backport.h](mediatek/mt76/mac80211_backport.h)
```diff
- #include "../../../../../net/mac80211/sta_info.h"
+ #include "/home/linux_source/net/mac80211/sta_info.h"
```

For simplicity, the absolute path is used here, and `/home/linux_source ` is the kernel source path.

Now, it's time to start:

```bash
$ sudo apt install openssl
$ make
$ sudo make install
```

If you find that the compiler complains about "redefined", that's good, because there is no missing mac80211 functionality. You need to amend [mac80211.c](mediatek/mt76/mac80211.c)

```diff
- #include "mac80211_backport.h"
```

Remove the inclusion of header file like this, then re-execute Make.

----


### Build with kernel

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


## Related work

https://github.com/openwrt/mt76/issues/454
https://bugs.launchpad.net/ubuntu/+source/linux/+bug/1716301/comments/53

This solves the problem of failed vendor requests and failed firmware uploads.

It only applies to some devices and is still an issue even on newer kernel versions like Ubuntu 21.04.


## Known Issue

- Tx AMSDU not supported. It is limited by the old mac80211 stack and may affect throughput.

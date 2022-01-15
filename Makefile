MT76DIR=mediatek/mt76
MODULE_SIGN_PATH=/lib/modules/$(shell uname -r)/build/certs/

.PHONY: all install clean test

all:
	make CONFIG_MT76x0U=m CONFIG_MT76_CORE=m -C /lib/modules/$(shell uname -r)/build  M=$(PWD)/$(MT76DIR) modules

install:
    ifeq ("$(wildcard $(MODULE_SIGN_PATH)/signing_key.*)","")
		openssl req -new -nodes -utf8 -sha512 -days 36500 -batch -x509 -config x509.genkey -outform DER -out signing_key.x509 -keyout signing_key.pem
		mv signing_key.pem signing_key.x509 $(MODULE_SIGN_PATH)
    endif
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD)/$(MT76DIR) modules_install

clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD)/$(MT76DIR) clean


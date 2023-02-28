VERSION := 1.3

PREFIX = /usr

OUT ?= build/
CFLAGS ?= -O2 -g0
CFLAGS += -DVERSION="\"$(VERSION)\"" -I. -I$(OUT) -Wall -Wno-unused-variable -Wno-unused-function

tools: $(OUT)ppkb-i2c-inputd $(OUT)ppkb-usb-flasher $(OUT)ppkb-usb-debugger $(OUT)ppkb-i2c-debugger $(OUT)ppkb-i2c-charger-ctl $(OUT)ppkb-i2c-flasher
fw: $(OUT)fw-stock.bin

all: tools fw

$(OUT)ppkb-usb-flasher: usb-flasher.c common.c
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)ppkb-usb-debugger: usb-debugger.c common.c
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)kmap.h: keymaps/physical-map.txt keymaps/factory-keymap.txt
	@mkdir -p $(OUT)
	php keymaps/map-to-c.php $^ $@

$(OUT)ppkb-i2c-inputd: i2c-inputd.c $(OUT)kmap.h common.c
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)ppkb-i2c-debugger: i2c-debugger.c common.c
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)ppkb-i2c-charger-ctl: i2c-charger-ctl.c common.c
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

$(OUT)ppkb-i2c-flasher: i2c-flasher.c common.c
	@mkdir -p $(OUT)
	$(CC) $(CFLAGS) -o $@ $<

#$(OUT)ppkb-i2c-selftest: i2c-selftest.c common.c
#	@mkdir -p $(OUT)
#	$(CC) $(CFLAGS) -o $@ $<

$(OUT)fw-stock.bin $(OUT)fw-user.bin: $(wildcard firmware/*.*)
	@mkdir -p $(OUT)
	cd firmware && ./build.sh
	cp -f firmware/build/fw-stock.bin $(OUT)fw-stock.bin
	cp -f firmware/build/fw-user.bin $(OUT)fw-user.bin

.PHONY: all fw tools clean install

clean:
	rm -f $(OUT)ppkb-i2c-inputd $(OUT)ppkb-usb-flasher $(OUT)ppkb-usb-debugger $(OUT)ppkb-i2c-debugger $(OUT)ppkb-i2c-charger-ctl $(OUT)ppkb-i2c-flasher $(OUT)kmap.h

install:
	mkdir -p $(DESTDIR)$(PREFIX)/bin/
	mkdir -p $(DESTDIR)$(PREFIX)/share/ppkb-firmware
	install $(OUT)ppkb-i2c-inputd $(OUT)ppkb-usb-flasher $(OUT)ppkb-usb-debugger $(OUT)ppkb-i2c-debugger $(OUT)ppkb-i2c-charger-ctl $(OUT)ppkb-i2c-flasher $(DESTDIR)$(PREFIX)/bin/
	install $(OUT)fw-stock.bin $(OUT)fw-user.bin $(DESTDIR)$(PREFIX)/share/ppkb-firmware/

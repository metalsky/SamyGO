require busybox.inc
PR = "${INC_PR}.0"

SRC_URI = "\
  http://www.busybox.net/downloads/busybox-${PV}.tar.gz \
  \
  file://udhcpscript.patch;patch=1 \
  file://udhcpc-fix-nfsroot.patch;patch=1 \
  file://B921600.patch;patch=1 \
  file://get_header_tar.patch;patch=1 \
  file://busybox-appletlib-dependency.patch;patch=1 \
  file://job-control-off.patch;patch=1 \
  file://busybox-cron \
  file://busybox-httpd \
  file://busybox-udhcpd \
  file://busybox-telnetd \
  file://default.script file://simple.script \
  file://hwclock.sh \
  file://mount.busybox \
  file://umount.busybox \
  file://defconfig \
  file://mdev \
  file://mdev.conf \
"

SRC_URI_append_samygo = "file://samsung-devices-table.txt"

EXTRA_OEMAKE += "V=1 ARCH=${TARGET_ARCH} CROSS_COMPILE=${TARGET_PREFIX}"

do_configure_prepend () {
	if [ "${TARGET_ARCH}" = "avr32" ] ; then
		sed -i s:CONFIG_FEATURE_OSF_LABEL=y:CONFIG_FEATURE_OSF_LABEL=n: ${WORKDIR}/defconfig
	fi
}

do_install_append() {
	install -m 0644 ${WORKDIR}/mdev.conf ${D}${sysconfdir}/
	install -d ${D}${sysconfdir}/init.d/
	install -d ${D}${sysconfdir}/mdev
	install -m 0755 ${WORKDIR}/mdev ${D}${sysconfdir}/init.d/
}

do_install_append_samygo() {
	install -m 0644 ${WORKDIR}/samsung-devices-table.txt ${D}${sysconfdir}/
}


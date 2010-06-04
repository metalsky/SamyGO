require u-boot.inc

DEPENDS = ""

PR = "r0"

SRC_URI = "http://www.samsung.com/global/opensource/files/uboot_b650.tgz \
	file://replace_echo_n_b650.patch;patch=1 \
"

SRC_URI[md5sum] = "4c9ba9d7bd970437668f6aac8012df3c"
SRC_URI[sha256sum] = "01007182de5fe9e1faf15a9b07e8075b7d4dd2eec86201a773f65e42209d96ae"

COMPATIBLE_MACHINE = "leonid"

S = ${WORKDIR}/uboot

do_compile () {
        unset LDFLAGS
        unset CFLAGS
        unset CPPFLAGS
        oe_runmake ${UBOOT_MACHINE}
        oe_runmake all
        oe_runmake tools
}

require firmware.inc
require firmisrar.inc
# obsolete, en/decrypt with openssl
# require firmware-cip.inc

ARM_INSTRUCTION_SET = "arm"

PR = "r0"

DL_URI = "http://downloadcenter.samsung.com/content/FM/200911/20091119185403937/${MACHINE}[__________PX__].exe"

# S = "${WORKDIR}
P_OFFSET = "52204062"
P_LINE = ";/mtd_rwarea/rcSGO     &"
require firmware-package.bbclass

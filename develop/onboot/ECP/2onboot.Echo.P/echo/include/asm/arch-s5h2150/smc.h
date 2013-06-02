/*
 * linux/include/asm-arm/arch-s5h2150/smc.h
 *
 *  Copyright (C) 2003-2007 Samsung Electronics
 *  Author: ij.jang@samsung.com
 *
 */

#ifndef _S5H2150_SMC_H
#define _S5H2150_SMC_H

/* SMC Register */
#define V_SMC(offset)  (*(volatile unsigned *)(V_SMC_BASE+(offset)))

/* common offsets for each bank */
#define O_SMBIDCYR	(0x00)
#define O_SMBWST1R	(0x04)
#define O_SMBWST2R	(0x08)
#define O_SMBWSTOENR	(0x0C)
#define O_SMBWSTWENR	(0x10)
#define O_SMBCR		(0x14)
#define O_SMBSR		(0x18)

/* do not use offset marked "no immed_8" for the "immediate operand" */
#define O_SMBEWS	(0xE0)
#define O_SMBPERIID0	(0xFE0)
#define O_SMBPERIID1	(0xFE4)	/* no immed_8 */
#define O_SMBPERIID2	(0xFE8)	/* no immed_8 */
#define O_SMBPERIID3	(0xFEC)	/* no immed_8 */
#define O_SMBPCELLID0	(0xFF0)
#define O_SMBPCELLID1	(0xFF4)	/* no immed_8 */
#define O_SMBPCELLID2	(0xFF8)	/* no immed_8 */
#define O_SMBPCELLID3	(0XFFC)	/* no immed_8 */
#define O_SMCCLKSTOP	(0x1E8)
#define O_SMCSYNCEN	(0X1EC)

#define O_SMC_BANK0	(0x38)
#define O_SMC_BANK1	(0x1C)
#define O_SMC_BANK2	(0x00)
#define O_SMC_BANK3	(0x54)
#define O_SMC_BANK4	(0x70)
#define O_SMC_BANK5	(0x8C)
#define O_SMC_BANK6	(0xA8)
#define O_SMC_BANK7	(0xC4)

#define R_SMC_REG(base, offset)	V_SMC(O_SMC_BANK##base + offset)

/* bank 0 */
#define R_SMBIDCYR2	R_SMC_REG(0,O_SMBIDCYR)
#define R_SMBWST1R2	R_SMC_REG(0,O_SMBWST1R)
#define R_SMBWST2R2	R_SMC_REG(0,O_SMBWST2R)
#define R_SMBWSTOENR2	R_SMC_REG(0,O_SMBWSTOENR)
#define R_SMBWSTWENR2	R_SMC_REG(0,O_SMBWSTWENR)
#define R_SMBCR2	R_SMC_REG(0,O_SMBCR)
#define R_SMBSR2	R_SMC_REG(0,O_SMBSR)

/* bank 1 */
#define R_SMBIDCYR1	R_SMC_REG(1,O_SMBIDCYR)
#define R_SMBWST1R1	R_SMC_REG(1,O_SMBWST1R)
#define R_SMBWST2R1	R_SMC_REG(1,O_SMBWST2R)
#define R_SMBWSTOENR1	R_SMC_REG(1,O_SMBWSTOENR)
#define R_SMBWSTWENR1	R_SMC_REG(1,O_SMBWSTWENR)
#define R_SMBCR1	R_SMC_REG(1,O_SMBCR)
#define R_SMBSR1	R_SMC_REG(1,O_SMBSR)

/* bank 2 */
#define R_SMBIDCYR0	R_SMC_REG(2,O_SMBIDCYR)
#define R_SMBWST1R0	R_SMC_REG(2,O_SMBWST1R)
#define R_SMBWST2R0	R_SMC_REG(2,O_SMBWST2R)
#define R_SMBWSTOENR0	R_SMC_REG(2,O_SMBWSTOENR)
#define R_SMBWSTWENR0	R_SMC_REG(2,O_SMBWSTWENR)
#define R_SMBCR0	R_SMC_REG(2,O_SMBCR)
#define R_SMBSR0	R_SMC_REG(2,O_SMBSR)

/* bank 3 */
#define R_SMBIDCYR3	R_SMC_REG(3,O_SMBIDCYR)
#define R_SMBWST1R3	R_SMC_REG(3,O_SMBWST1R)
#define R_SMBWST2R3	R_SMC_REG(3,O_SMBWST2R)
#define R_SMBWSTOENR3	R_SMC_REG(3,O_SMBWSTOENR)
#define R_SMBWSTWENR3	R_SMC_REG(3,O_SMBWSTWENR)
#define R_SMBCR3	R_SMC_REG(3,O_SMBCR)
#define R_SMBSR3	R_SMC_REG(3,O_SMBSR)

/* bank 4 */
#define R_SMBIDCYR4	R_SMC_REG(4,O_SMBIDCYR)
#define R_SMBWST1R4	R_SMC_REG(4,O_SMBWST1R)
#define R_SMBWST2R4	R_SMC_REG(4,O_SMBWST2R)
#define R_SMBWSTOENR4	R_SMC_REG(4,O_SMBWSTOENR)
#define R_SMBWSTWENR4	R_SMC_REG(4,O_SMBWSTWENR)
#define R_SMBCR4	R_SMC_REG(4,O_SMBCR)
#define R_SMBSR4	R_SMC_REG(4,O_SMBSR)

/* bank 5 */
#define R_SMBIDCYR5	R_SMC_REG(5,O_SMBIDCYR)
#define R_SMBWST1R5	R_SMC_REG(5,O_SMBWST1R)
#define R_SMBWST2R5	R_SMC_REG(5,O_SMBWST2R)
#define R_SMBWSTOENR5	R_SMC_REG(5,O_SMBWSTOENR)
#define R_SMBWSTWENR5	R_SMC_REG(5,O_SMBWSTWENR)
#define R_SMBCR5	R_SMC_REG(5,O_SMBCR)
#define R_SMBSR5	R_SMC_REG(5,O_SMBSR)

/* bank 6 */
#define R_SMBIDCYR6	R_SMC_REG(6,O_SMBIDCYR)
#define R_SMBWST1R6	R_SMC_REG(6,O_SMBWST1R)
#define R_SMBWST2R6	R_SMC_REG(6,O_SMBWST2R)
#define R_SMBWSTOENR6	R_SMC_REG(6,O_SMBWSTOENR)
#define R_SMBWSTWENR6	R_SMC_REG(6,O_SMBWSTWENR)
#define R_SMBCR6	R_SMC_REG(6,O_SMBCR)
#define R_SMBSR6	R_SMC_REG(6,O_SMBSR)

/* bank 7 */
#define R_SMBIDCYR7	R_SMC_REG(7,O_SMBIDCYR)
#define R_SMBWST1R7	R_SMC_REG(7,O_SMBWST1R)
#define R_SMBWST2R7	R_SMC_REG(7,O_SMBWST2R)
#define R_SMBWSTOENR7	R_SMC_REG(7,O_SMBWSTOENR)
#define R_SMBWSTWENR7	R_SMC_REG(7,O_SMBWSTWENR)
#define R_SMBCR7	R_SMC_REG(7,O_SMBCR)
#define R_SMBSR7	R_SMC_REG(7,O_SMBSR)

#define R_SMBEWS	V_SMC(O_SMBEWS)
#define R_SMBPERIID0	V_SMC(O_SMBPERIID0)
#define R_SMBPERIID1	V_SMC(O_SMBPERIID1)
#define R_SMBPERIID2	V_SMC(O_SMBPERIID2)
#define R_SMBPERIID3	V_SMC(O_SMBPERIID3)
#define R_SMBPCELLID0	V_SMC(O_SMBPCELLID0)
#define R_SMBPCELLID1	V_SMC(O_SMBPCELLID1)
#define R_SMBPCELLID2	V_SMC(O_SMBPCELLID2)
#define R_SMBPCELLID3	V_SMC(O_SMBPCELLID3)
#define R_SMCCLKSTOP	V_SMC(O_SMCCLKSTOP)
#define R_SMCSYNCEN	V_SMC(O_SMCSYNCEN)

#endif


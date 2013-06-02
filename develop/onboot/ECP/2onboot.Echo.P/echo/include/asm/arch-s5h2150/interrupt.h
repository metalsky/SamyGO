/*
 * linux/include/asm-arm/arch-s5h2150/interrupt.h
 *
 *  Copyright (C) 2003-2007 Samsung Electronics
 *  Author: ij.jang@samsung.com
 *
 */

#ifndef _S5H2150_INTC_H_
#define _S5H2150_INTC_H_

/* interrupt */
#define V_INT(offset)  (*(volatile unsigned *)(V_INT_BASE+(offset)))

#define O_INTCON		(0x00)
#define O_INTPND		(0x04)
#define O_INTMOD		(0x08)
#define O_INTMSK		(0x0C)
#define O_LEVEL			(0x10)
#define O_I_PSLV0		(0x14)
#define O_I_PSLV1 		(0x18)
#define O_I_PSLV2		(0x1C)
#define O_I_PSLV3 		(0x20)
#define O_I_PMST 		(0x24)
#define O_I_CSLV0 		(0x28)
#define O_I_CSLV1		(0x2C)
#define O_I_CSLV2 		(0x30)
#define O_I_CSLV3		(0x34)
#define O_I_CMST 		(0x38)
#define O_I_ISPR 		(0x3C)
#define O_I_ISPC		(0x40)
#define O_F_PSLV0 		(0x44)
#define O_F_PSLV1 		(0x48)
#define O_F_PSLV2  		(0x4C)
#define O_F_PSLV3 		(0x50)
#define O_F_PMST 		(0x54)
#define O_F_CSLV0 		(0x58)
#define O_F_CSLV1 		(0x5C)
#define O_F_CSLV2 		(0x60)
#define O_F_CSLV3 		(0x64)
#define O_F_CMST  		(0x68)
#define O_F_ISPR 		(0x6C)
#define O_F_ISPC 		(0x70)
#define O_POLARITY 		(0x74)
#define O_I_VECADDR 		(0x78)
#define O_F_VECADDR 		(0x7C)
#define O_TIC_QSRC		(0x80)
#define O_TIC_FIRQ		(0x84)
/*                  0x88 reserved */
#define O_TIC_TESTEN		(0x8C)
#define O_SRCPND     	    	(0x90)
#define O_SUBINT		(0x94)
#define O_INTSRCSEL0		(0x98)
#define O_INTSRCSEL1 		(0x9C)
#define O_INTSRCSEL2 		(0xA0)
#define O_INTSRCSEL3 		(0xA4)
#define O_INTSRCSEL4 		(0xA8)
#define O_INTSRCSEL5 		(0xAC)
#define O_INTSRCSEL6		(0xB0)
#define O_INTSRCSEL7		(0xB4)

#define R_INTCON		V_INT(O_INTCON	)
#define R_INTPND		V_INT(O_INTPND	)
#define R_INTMOD		V_INT(O_INTMOD	)
#define R_INTMSK		V_INT(O_INTMSK	)
#define R_LEVEL			V_INT(O_LEVEL	)
#define R_I_PSLV0		V_INT(O_I_PSLV0	)
#define R_I_PSLV1 		V_INT(O_I_PSLV1	)
#define R_I_PSLV2		V_INT(O_I_PSLV2	)
#define R_I_PSLV3 		V_INT(O_I_PSLV3	)
#define R_I_PMST 		V_INT(O_I_PMST 	)
#define R_I_CSLV0 		V_INT(O_I_CSLV0	)
#define R_I_CSLV1		V_INT(O_I_CSLV1	)
#define R_I_CSLV2 		V_INT(O_I_CSLV2	)
#define R_I_CSLV3		V_INT(O_I_CSLV3	)
#define R_I_CMST 		V_INT(O_I_CMST 	)
#define R_I_ISPR 		V_INT(O_I_ISPR 	)
#define R_I_ISPC		V_INT(O_I_ISPC	)
#define R_F_PSLV0 		V_INT(O_F_PSLV0	)
#define R_F_PSLV1 		V_INT(O_F_PSLV1	)
#define R_F_PSLV2  		V_INT(O_F_PSLV2	)
#define R_F_PSLV3 		V_INT(O_F_PSLV3	)
#define R_F_PMST 		V_INT(O_F_PMST 	)
#define R_F_CSLV0 		V_INT(O_F_CSLV0	)
#define R_F_CSLV1 		V_INT(O_F_CSLV1	)
#define R_F_CSLV2 		V_INT(O_F_CSLV2	)
#define R_F_CSLV3 		V_INT(O_F_CSLV3	)
#define R_F_CMST  		V_INT(O_F_CMST 	)
#define R_F_ISPR 		V_INT(O_F_ISPR 	)
#define R_F_ISPC 		V_INT(O_F_ISPC 	)
#define R_POLARITY 		V_INT(O_POLARITY)
#define R_I_VECADDR 		V_INT(O_I_VECADDR)
#define R_F_VECADDR 		V_INT(O_F_VECADDR)
#define R_TIC_QSRC		V_INT(O_TIC_QSRC)
#define R_TIC_FIRQ		V_INT(O_TIC_FIRQ)
/*                  0x88 reserved */
#define R_TIC_TESTEN		V_INT(O_TIC_TESTEN)
#define R_SRCPND     	    	V_INT(O_SRCPND    )
#define R_SUBINT		V_INT(O_SUBINT    )
#define R_INTSRCSEL0		V_INT(O_INTSRCSEL0)
#define R_INTSRCSEL1 		V_INT(O_INTSRCSEL1)
#define R_INTSRCSEL2 		V_INT(O_INTSRCSEL2)
#define R_INTSRCSEL3 		V_INT(O_INTSRCSEL3)
#define R_INTSRCSEL4 		V_INT(O_INTSRCSEL4)
#define R_INTSRCSEL5 		V_INT(O_INTSRCSEL5)
#define R_INTSRCSEL6		V_INT(O_INTSRCSEL6)
#define R_INTSRCSEL7		V_INT(O_INTSRCSEL7)

#endif

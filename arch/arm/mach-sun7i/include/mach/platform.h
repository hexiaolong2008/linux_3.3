/*
 * arch\arm\mach-sun7i\include\mach\platform.h
 * (C) Copyright 2010-2015
 * Reuuimlla Technology Co., Ltd. <www.reuuimllatech.com>
 * Benn Huang <benn@reuuimllatech.com>
 *
 * core header file for Lichee Linux BSP
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 */

#ifndef __SW_PLATFORM_H
#define __SW_PLATFORM_H

#include "hardware.h"

/* device physical address */
#define SW_PA_BROM_START                  0xffff0000
#define SW_PA_BROM_END                    0xffff7fff

#define SW_PA_SRAM_BASE                   0x00000000
#define SW_PA_SRAM_A1_BASE                0x00000000
#define SW_PA_SRAM_A2_BASE                0x00004000
#define SW_PA_SRAM_A3_BASE                0x00008000
#define SW_PA_SRAM_A4_BASE                0x0000b400
#define SW_PA_SRAM_D_BASE                 0x00010000
#define SW_PA_SRAM_B_BASE                 0x00020000

#define SW_PA_SDRAM_START                 0x40000000

#define SW_PA_IO_BASE                     0x01c00000
#define SW_PA_SRAM_IO_BASE                0x01c00000
#define SW_PA_DRAM_IO_BASE                0x01c01000
#define SW_PA_DMAC_IO_BASE                0x01c02000
#define SW_PA_NFC_IO_BASE                 0x01c03000
#define SW_PA_TS_IO_BASE                  0x01c04000
#define SW_PA_SPI0_IO_BASE                0x01c05000
#define SW_PA_SPI1_IO_BASE                0x01c06000
#define SW_PA_MS_IO_BASE                  0x01c07000
#define SW_PA_TVD_IO_BASE                 0x01c08000
#define SW_PA_CSI0_IO_BASE                0x01c09000
#define SW_PA_TVE0_IO_BASE                0x01c0a000
#define SW_PA_EMAC_IO_BASE                0x01c0b000
#define SW_PA_LCD0_IO_BASE                0x01c0c000
#define SW_PA_LCD1_IO_BASE                0x01c0d000
#define SW_PA_VE_IO_BASE                  0x01c0e000
#define SW_PA_SDC0_IO_BASE                0x01c0f000
#define SW_PA_SDC1_IO_BASE                0x01c10000
#define SW_PA_SDC2_IO_BASE                0x01c11000
#define SW_PA_SDC3_IO_BASE                0x01c12000
#define SW_PA_USB0_IO_BASE                0x01c13000
#define SW_PA_USB1_IO_BASE                0x01c14000
#define SW_PA_SS_IO_BASE                  0x01c15000
#define SW_PA_HDMI_IO_BASE                0x01c16000
#define SW_PA_SPI2_IO_BASE                0x01c17000
#define SW_PA_SATA_IO_BASE                0x01c18000
#define SW_PA_PATA_IO_BASE                0x01c19000
#define SW_PA_ACE_IO_BASE                 0x01c1a000
#define SW_PA_TVE1_IO_BASE                0x01c1b000
#define SW_PA_USB2_IO_BASE                0x01c1c000
#define SW_PA_CSI1_IO_BASE                0x01c1d000
#define SW_PA_TZASC_IO_BASE               0x01c1e000
#define SW_PA_SPI3_IO_BASE                0x01c1f000
#define SW_PA_CCM_IO_BASE                 0x01c20000
#define SW_PA_INTC_IO_BASE                0x01c20400
#define SW_PA_PORTC_IO_BASE               0x01c20800
#define SW_PA_TIMERC_IO_BASE              0x01c20c00
#define SW_PA_SPDIF_IO_BASE               0x01c21000
#define SW_PA_AC97_IO_BASE                0x01c21400
#define SW_PA_IR0_IO_BASE                 0x01c21800
#define SW_PA_IR1_IO_BASE                 0x01c21c00
#define SW_PA_IIS1_IO_BASE                0x01c22000
#define SW_PA_IIS0_IO_BASE                0x01c22400
#define SW_PA_LRADC_IO_BASE               0x01c22800
#define SW_PA_ADDA_IO_BASE                0x01c22c00
#define SW_PA_KEYPAD_IO_BASE              0x01c23000
#define SW_PA_TZPC_IO_BASE                0x01c23400
#define SW_PA_SID_IO_BASE                 0x01c23800
#define SW_PA_SJTAG_IO_BASE               0x01c23c00
#define SW_PA_IIS2_IO_BASE                0x01c24400
#define SW_PA_TP_IO_BASE                  0x01c25000
#define SW_PA_PMU_IO_BASE                 0x01c25400
#define SW_PA_CPUCFG_IO_BASE              0x01c25c00
#define SW_PA_UART0_IO_BASE               0x01c28000
#define SW_PA_UART1_IO_BASE               0x01c28400
#define SW_PA_UART2_IO_BASE               0x01c28800
#define SW_PA_UART3_IO_BASE               0x01c28c00
#define SW_PA_UART4_IO_BASE               0x01c29000
#define SW_PA_UART5_IO_BASE               0x01c29400
#define SW_PA_UART6_IO_BASE               0x01c29800
#define SW_PA_UART7_IO_BASE               0x01c29c00
#define SW_PA_PS20_IO_BASE                0x01c2a000
#define SW_PA_PS21_IO_BASE                0x01c2a400
#define SW_PA_TWI0_IO_BASE                0x01c2ac00
#define SW_PA_TWI1_IO_BASE                0x01c2b000
#define SW_PA_TWI2_IO_BASE                0x01c2b400
#define SW_PA_TWI3_IO_BASE                0x01c2b800
#define SW_PA_CAN_IO_BASE                 0x01c2bc00
#define SW_PA_TWI4_IO_BASE                0x01c2c000
#define SW_PA_SCR_IO_BASE                 0x01c2c400
#define SW_PA_GPS_IO_BASE                 0x01c30000
#define SW_PA_MALI_IO_BASE                0x01c40000
#define SW_PA_GMAC_IO_BASE                0x01c50000
#define SW_PA_HSTIMER_IO_BASE             0x01c60000
#define SW_PA_GIC_IO_BASE                 0x01c80000
#define SW_PA_HDMI1_IO_BASE               0x01ce0000
#define SW_PA_CPUBIST_IO_BASE             0x3f501000
#define SW_PA_CPUBIST_IO_BASE             0x3f501000
#define SW_PA_SRAM_C_IO_BASE              0x01d00000
#define SW_PA_DEFE0_IO_BASE               0x01e00000
#define SW_PA_DEFE1_IO_BASE               0x01e20000
#define SW_PA_DEBE0_IO_BASE               0x01e60000
#define SW_PA_DEBE1_IO_BASE               0x01e40000
#define SW_PA_MP_IO_BASE                  0x01e80000
#define SW_PA_AVG_IO_BASE                 0x01ea0000

#define SW_PA_GIC_DIST_IO_BASE            0x01c81000
#define SW_PA_GIC_CPU_IO_BASE             0x01c82000
#define SW_PA_SCU_IO_BASE                 0x01c80000
#define SW_PA_TIMER_G_IO_BASE             0x01c80200 /* CPU global timer, not used */
#define SW_PA_TIMER_P_IO_BASE             0x01c80600 /* CPU private timer, not used */

/* device virtual address */
#define SW_VA_BROM_START                  IO_ADDRESS(SW_PA_BROM_START     )
#define SW_VA_BROM_END                    IO_ADDRESS(SW_PA_BROM_END       )

#define SW_VA_SRAM_BASE                   IO_ADDRESS(SW_PA_SRAM_BASE      )
#define SW_VA_SRAM_A1_BASE                IO_ADDRESS(SW_PA_SRAM_A1_BASE   )
#define SW_VA_SRAM_A2_BASE                IO_ADDRESS(SW_PA_SRAM_A2_BASE   )
#define SW_VA_SRAM_A3_BASE                IO_ADDRESS(SW_PA_SRAM_A3_BASE   )
#define SW_VA_SRAM_A4_BASE                IO_ADDRESS(SW_PA_SRAM_A4_BASE   )
#define SW_VA_SRAM_D_BASE                 IO_ADDRESS(SW_PA_SRAM_D_BASE    )
#define SW_VA_SRAM_B_BASE                 IO_ADDRESS(SW_PA_SRAM_B_BASE    )

#define SW_VA_IO_BASE                     IO_ADDRESS(SW_PA_IO_BASE        )
#define SW_VA_SRAM_IO_BASE                IO_ADDRESS(SW_PA_SRAM_IO_BASE   )
#define SW_VA_DRAM_IO_BASE                IO_ADDRESS(SW_PA_DRAM_IO_BASE   )
#define SW_VA_DMAC_IO_BASE                IO_ADDRESS(SW_PA_DMAC_IO_BASE   )
#define SW_VA_NFC_IO_BASE                 IO_ADDRESS(SW_PA_NFC_IO_BASE    )
#define SW_VA_TS_IO_BASE                  IO_ADDRESS(SW_PA_TS_IO_BASE     )
#define SW_VA_SPI0_IO_BASE                IO_ADDRESS(SW_PA_SPI0_IO_BASE   )
#define SW_VA_SPI1_IO_BASE                IO_ADDRESS(SW_PA_SPI1_IO_BASE   )
#define SW_VA_MS_IO_BASE                  IO_ADDRESS(SW_PA_MS_IO_BASE     )
#define SW_VA_TVD_IO_BASE                 IO_ADDRESS(SW_PA_TVD_IO_BASE    )
#define SW_VA_CSI0_IO_BASE                IO_ADDRESS(SW_PA_CSI0_IO_BASE   )
#define SW_VA_TVE0_IO_BASE                IO_ADDRESS(SW_PA_TVE0_IO_BASE   )
#define SW_VA_EMAC_IO_BASE                IO_ADDRESS(SW_PA_EMAC_IO_BASE   )
#define SW_VA_LCD0_IO_BASE                IO_ADDRESS(SW_PA_LCD0_IO_BASE   )
#define SW_VA_LCD1_IO_BASE                IO_ADDRESS(SW_PA_LCD1_IO_BASE   )
#define SW_VA_VE_IO_BASE                  IO_ADDRESS(SW_PA_VE_IO_BASE     )
#define SW_VA_SDC0_IO_BASE                IO_ADDRESS(SW_PA_SDC0_IO_BASE   )
#define SW_VA_SDC1_IO_BASE                IO_ADDRESS(SW_PA_SDC1_IO_BASE   )
#define SW_VA_SDC2_IO_BASE                IO_ADDRESS(SW_PA_SDC2_IO_BASE   )
#define SW_VA_SDC3_IO_BASE                IO_ADDRESS(SW_PA_SDC3_IO_BASE   )
#define SW_VA_USB0_IO_BASE                IO_ADDRESS(SW_PA_USB0_IO_BASE   )
#define SW_VA_USB1_IO_BASE                IO_ADDRESS(SW_PA_USB1_IO_BASE   )
#define SW_VA_SS_IO_BASE                  IO_ADDRESS(SW_PA_SS_IO_BASE     )
#define SW_VA_HDMI_IO_BASE                IO_ADDRESS(SW_PA_HDMI_IO_BASE   )
#define SW_VA_SPI2_IO_BASE                IO_ADDRESS(SW_PA_SPI2_IO_BASE   )
#define SW_VA_SATA_IO_BASE                IO_ADDRESS(SW_PA_SATA_IO_BASE   )
#define SW_VA_PATA_IO_BASE                IO_ADDRESS(SW_PA_PATA_IO_BASE   )
#define SW_VA_ACE_IO_BASE                 IO_ADDRESS(SW_PA_ACE_IO_BASE    )
#define SW_VA_TVE1_IO_BASE                IO_ADDRESS(SW_PA_TVE1_IO_BASE   )
#define SW_VA_USB2_IO_BASE                IO_ADDRESS(SW_PA_USB2_IO_BASE   )
#define SW_VA_CSI1_IO_BASE                IO_ADDRESS(SW_PA_CSI1_IO_BASE   )
#define SW_VA_TZASC_IO_BASE               IO_ADDRESS(SW_PA_TZASC_IO_BASE  )
#define SW_VA_SPI3_IO_BASE                IO_ADDRESS(SW_PA_SPI3_IO_BASE   )
#define SW_VA_CCM_IO_BASE                 IO_ADDRESS(SW_PA_CCM_IO_BASE    )
#define SW_VA_INTC_IO_BASE                IO_ADDRESS(SW_PA_INTC_IO_BASE   )
#define SW_VA_PORTC_IO_BASE               IO_ADDRESS(SW_PA_PORTC_IO_BASE  )
#define SW_VA_TIMERC_IO_BASE              IO_ADDRESS(SW_PA_TIMERC_IO_BASE )
#define SW_VA_SPDIF_IO_BASE               IO_ADDRESS(SW_PA_SPDIF_IO_BASE  )
#define SW_VA_AC97_IO_BASE                IO_ADDRESS(SW_PA_AC97_IO_BASE   )
#define SW_VA_IR0_IO_BASE                 IO_ADDRESS(SW_PA_IR0_IO_BASE    )
#define SW_VA_IR1_IO_BASE                 IO_ADDRESS(SW_PA_IR1_IO_BASE    )
#define SW_VA_IIS1_IO_BASE                IO_ADDRESS(SW_PA_IIS1_IO_BASE   )
#define SW_VA_IIS0_IO_BASE                IO_ADDRESS(SW_PA_IIS0_IO_BASE   )
#define SW_VA_LRADC_IO_BASE               IO_ADDRESS(SW_PA_LRADC_IO_BASE  )
#define SW_VA_ADDA_IO_BASE                IO_ADDRESS(SW_PA_ADDA_IO_BASE   )
#define SW_VA_KEYPAD_IO_BASE              IO_ADDRESS(SW_PA_KEYPAD_IO_BASE )
#define SW_VA_TZPC_IO_BASE                IO_ADDRESS(SW_PA_TZPC_IO_BASE   )
#define SW_VA_SID_IO_BASE                 IO_ADDRESS(SW_PA_SID_IO_BASE    )
#define SW_VA_SJTAG_IO_BASE               IO_ADDRESS(SW_PA_SJTAG_IO_BASE  )
#define SW_VA_IIS2_IO_BASE                IO_ADDRESS(SW_PA_IIS2_IO_BASE   )
#define SW_VA_TP_IO_BASE                  IO_ADDRESS(SW_PA_TP_IO_BASE     )
#define SW_VA_PMU_IO_BASE                 IO_ADDRESS(SW_PA_PMU_IO_BASE    )
#define SW_VA_CPUCFG_IO_BASE              IO_ADDRESS(SW_PA_CPUCFG_IO_BASE )
#define SW_VA_UART0_IO_BASE               IO_ADDRESS(SW_PA_UART0_IO_BASE  )
#define SW_VA_UART1_IO_BASE               IO_ADDRESS(SW_PA_UART1_IO_BASE  )
#define SW_VA_UART2_IO_BASE               IO_ADDRESS(SW_PA_UART2_IO_BASE  )
#define SW_VA_UART3_IO_BASE               IO_ADDRESS(SW_PA_UART3_IO_BASE  )
#define SW_VA_UART4_IO_BASE               IO_ADDRESS(SW_PA_UART4_IO_BASE  )
#define SW_VA_UART5_IO_BASE               IO_ADDRESS(SW_PA_UART5_IO_BASE  )
#define SW_VA_UART6_IO_BASE               IO_ADDRESS(SW_PA_UART6_IO_BASE  )
#define SW_VA_UART7_IO_BASE               IO_ADDRESS(SW_PA_UART7_IO_BASE  )
#define SW_VA_PS20_IO_BASE                IO_ADDRESS(SW_PA_PS20_IO_BASE   )
#define SW_VA_PS21_IO_BASE                IO_ADDRESS(SW_PA_PS21_IO_BASE   )
#define SW_VA_TWI0_IO_BASE                IO_ADDRESS(SW_PA_TWI0_IO_BASE   )
#define SW_VA_TWI1_IO_BASE                IO_ADDRESS(SW_PA_TWI1_IO_BASE   )
#define SW_VA_TWI2_IO_BASE                IO_ADDRESS(SW_PA_TWI2_IO_BASE   )
#define SW_VA_TWI3_IO_BASE                IO_ADDRESS(SW_PA_TWI3_IO_BASE   )
#define SW_VA_CAN_IO_BASE                 IO_ADDRESS(SW_PA_CAN_IO_BASE    )
#define SW_VA_TWI4_IO_BASE                IO_ADDRESS(SW_PA_TWI4_IO_BASE   )
#define SW_VA_SCR_IO_BASE                 IO_ADDRESS(SW_PA_SCR_IO_BASE    )
#define SW_VA_GPS_IO_BASE                 IO_ADDRESS(SW_PA_GPS_IO_BASE    )
#define SW_VA_MALI_IO_BASE                IO_ADDRESS(SW_PA_MALI_IO_BASE   )
#define SW_VA_GMAC_IO_BASE                IO_ADDRESS(SW_PA_GMAC_IO_BASE   )
#define SW_VA_HSTIMER_IO_BASE             IO_ADDRESS(SW_PA_HSTIMER_IO_BASE)
#define SW_VA_GIC_IO_BASE                 IO_ADDRESS(SW_PA_GIC_IO_BASE    )
#define SW_VA_HDMI1_IO_BASE               IO_ADDRESS(SW_PA_HDMI1_IO_BASE  )
#define SW_VA_CPUBIST_IO_BASE             IO_ADDRESS(SW_PA_CPUBIST_IO_BASE)
#define SW_VA_CPUBIST_IO_BASE             IO_ADDRESS(SW_PA_CPUBIST_IO_BASE)
#define SW_VA_SRAM_C_IO_BASE              IO_ADDRESS(SW_PA_SRAM_C_IO_BASE )
#define SW_VA_DEFE0_IO_BASE               IO_ADDRESS(SW_PA_DEFE0_IO_BASE  )
#define SW_VA_DEFE1_IO_BASE               IO_ADDRESS(SW_PA_DEFE1_IO_BASE  )
#define SW_VA_DEBE0_IO_BASE               IO_ADDRESS(SW_PA_DEBE0_IO_BASE  )
#define SW_VA_DEBE1_IO_BASE               IO_ADDRESS(SW_PA_DEBE1_IO_BASE  )
#define SW_VA_MP_IO_BASE                  IO_ADDRESS(SW_PA_MP_IO_BASE     )
#define SW_VA_AVG_IO_BASE                 IO_ADDRESS(SW_PA_AVG_IO_BASE    )

#define SW_VA_GIC_DIST_IO_BASE            IO_ADDRESS(SW_PA_GIC_DIST_IO_BASE)
#define SW_VA_GIC_CPU_IO_BASE             IO_ADDRESS(SW_PA_GIC_CPU_IO_BASE )
#define SW_VA_SCU_IO_BASE                 IO_ADDRESS(SW_PA_SCU_IO_BASE     )
#define SW_VA_TIMER_G_IO_BASE             IO_ADDRESS(SW_PA_TIMER_G_IO_BASE ) /* CPU global timer, not used */
#define SW_VA_TIMER_P_IO_BASE             IO_ADDRESS(SW_PA_TIMER_P_IO_BASE ) /* CPU private timer, not used */

/* memory size */
#define SW_IO_SIZE                        0x00400000 /* 4MB(Max) */
#define SW_SRAM_A1_SIZE                   0x00004000 /* 16k */
#define SW_SRAM_A2_SIZE                   0x00004000 /* 16k */
#define SW_SRAM_A3_SIZE                   0x00003400 /* 13k */
#define SW_SRAM_A4_SIZE                   0x00000c00 /* 3k */
#define SW_SRAM_D_SIZE                    0x00001000 /* 4k */
#define SW_SRAM_B_SIZE                    0x00010000 /* 64k */
#define SW_BROM_SIZE                      0x00008000 /* 32k */

/**
 * Interrupt controller registers
 *
 */
#define SW_INT_VECTOR_REG                 (SW_VA_INTC_IO_BASE + 0x00)
#define SW_INT_BASE_ADR_REG               (SW_VA_INTC_IO_BASE + 0x04)
#define SW_INT_PROTECTION_REG             (SW_VA_INTC_IO_BASE + 0x08)
#define SW_INT_NMI_CTRL_REG               (SW_VA_INTC_IO_BASE + 0x0c)
#define SW_INT_IRQ_PENDING_REG0           (SW_VA_INTC_IO_BASE + 0x10)
#define SW_INT_IRQ_PENDING_REG1           (SW_VA_INTC_IO_BASE + 0x14)
#define SW_INT_IRQ_PENDING_REG2           (SW_VA_INTC_IO_BASE + 0x18)

#define SW_INT_FIQ_PENDING_REG0           (SW_VA_INTC_IO_BASE + 0x20)
#define SW_INT_FIQ_PENDING_REG1           (SW_VA_INTC_IO_BASE + 0x24)
#define SW_INT_FIQ_PENDING_REG2           (SW_VA_INTC_IO_BASE + 0x28)

#define SW_INT_SELECT_REG0                (SW_VA_INTC_IO_BASE + 0x30)
#define SW_INT_SELECT_REG1                (SW_VA_INTC_IO_BASE + 0x34)
#define SW_INT_SELECT_REG2                (SW_VA_INTC_IO_BASE + 0x38)

#define SW_INT_ENABLE_REG0                (SW_VA_INTC_IO_BASE + 0x40)
#define SW_INT_ENABLE_REG1                (SW_VA_INTC_IO_BASE + 0x44)
#define SW_INT_ENABLE_REG2                (SW_VA_INTC_IO_BASE + 0x48)

#define SW_INT_MASK_REG0                  (SW_VA_INTC_IO_BASE + 0x50)
#define SW_INT_MASK_REG1                  (SW_VA_INTC_IO_BASE + 0x54)
#define SW_INT_MASK_REG2                  (SW_VA_INTC_IO_BASE + 0x58)

#define SW_INT_RESP_REG0                  (SW_VA_INTC_IO_BASE + 0x60)
#define SW_INT_RESP_REG1                  (SW_VA_INTC_IO_BASE + 0x64)
#define SW_INT_RESP_REG2                  (SW_VA_INTC_IO_BASE + 0x68)

#define SW_INT_FASTFORCE_REG0             (SW_VA_INTC_IO_BASE + 0x70)
#define SW_INT_FASTFORCE_REG1             (SW_VA_INTC_IO_BASE + 0x74)
#define SW_INT_FASTFORCE_REG2             (SW_VA_INTC_IO_BASE + 0x78)

#define SW_INT_SRCPRIO_REG0               (SW_VA_INTC_IO_BASE + 0x80)
#define SW_INT_SRCPRIO_REG1               (SW_VA_INTC_IO_BASE + 0x84)
#define SW_INT_SRCPRIO_REG2               (SW_VA_INTC_IO_BASE + 0x88)
#define SW_INT_SRCPRIO_REG3               (SW_VA_INTC_IO_BASE + 0x8c)
#define SW_INT_SRCPRIO_REG4               (SW_VA_INTC_IO_BASE + 0x90)

#define PA_VIC_BASE                       0x01c20400
#define VA_VIC_BASE                       IO_ADDRESS(PA_VIC_BASE)
#define PIO_BASE                          SW_PA_PORTC_IO_BASE

/*
 * DRAM controller register address
 */
#define SW_DRAM_SDR_CTL_REG               (SW_VA_DRAM_IO_BASE + 0x0C)
#define SW_DRAM_SDR_DCR                   (SW_VA_DRAM_IO_BASE + 0x04)

/*
 * other reg defination, not found in spec
 */
#define AW_GIC_DIST_BASE                  0x01c81000
#define AW_GIC_CPU_BASE                   0x01c82000
#define AW_TIMER_G_BASE                   0x01c80200 /* CPU global timer, not used */
#define AW_TIMER_P_BASE                   0x01c80600 /* CPU private timer, not used */

/*
 * CPUCFG
 */
#define AW_CPUCFG_P_REG0            0x01a4
#define CPUX_RESET_CTL(x) (0x40 + (x)*0x40)
#define CPUX_CONTROL(x)   (0x44 + (x)*0x40)
#define CPUX_STATUS(x)    (0x48 + (x)*0x40)
#define AW_CPUCFG_GENCTL            0x0184
#define AW_CPUCFG_DBGCTL0           0x01e0
#define AW_CPUCFG_DBGCTL1           0x01e4

#define AW_CPU1_PWR_CLAMP         0x01b0
#define AW_CPU1_PWROFF_REG        0x01b4

#endif


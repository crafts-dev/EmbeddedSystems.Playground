#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include <cydevice_trm.h>

/* ADC_cy_psoc4_sar */
#define ADC_cy_psoc4_sar__SAR_CTRL CYREG_SAR_CTRL
#define ADC_cy_psoc4_sar__SAR_INTR CYREG_SAR_INTR
#define ADC_cy_psoc4_sar__SAR_INTR_CAUSE CYREG_SAR_INTR_CAUSE
#define ADC_cy_psoc4_sar__SAR_INTR_MASK CYREG_SAR_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_INTR_MASKED CYREG_SAR_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_INTR_SET CYREG_SAR_INTR_SET
#define ADC_cy_psoc4_sar__SAR_NUMBER 0u
#define ADC_cy_psoc4_sar__SAR_RANGE_COND CYREG_SAR_RANGE_COND
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASK CYREG_SAR_RANGE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_MASKED CYREG_SAR_RANGE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_RANGE_INTR_SET CYREG_SAR_RANGE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_RANGE_THRES CYREG_SAR_RANGE_THRES
#define ADC_cy_psoc4_sar__SAR_SAMPLE_CTRL CYREG_SAR_SAMPLE_CTRL
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME01 CYREG_SAR_SAMPLE_TIME01
#define ADC_cy_psoc4_sar__SAR_SAMPLE_TIME23 CYREG_SAR_SAMPLE_TIME23
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASK CYREG_SAR_SATURATE_INTR_MASK
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_MASKED CYREG_SAR_SATURATE_INTR_MASKED
#define ADC_cy_psoc4_sar__SAR_SATURATE_INTR_SET CYREG_SAR_SATURATE_INTR_SET
#define ADC_cy_psoc4_sar__SAR_STATUS CYREG_SAR_STATUS

/* ADC_intClock */
#define ADC_intClock__CTRL_REGISTER CYREG_PERI_PCLK_CTL06
#define ADC_intClock__DIV_ID 0x00000040u
#define ADC_intClock__DIV_REGISTER CYREG_PERI_DIV_16_CTL00
#define ADC_intClock__PA_DIV_ID 0x000000FFu

/* ADC_IRQ */
#define ADC_IRQ__INTC_CLR_EN_REG CYREG_CM0_ICER
#define ADC_IRQ__INTC_CLR_PD_REG CYREG_CM0_ICPR
#define ADC_IRQ__INTC_MASK 0x8000u
#define ADC_IRQ__INTC_NUMBER 15u
#define ADC_IRQ__INTC_PRIOR_MASK 0xC0000000u
#define ADC_IRQ__INTC_PRIOR_NUM 3u
#define ADC_IRQ__INTC_PRIOR_REG CYREG_CM0_IPR3
#define ADC_IRQ__INTC_SET_EN_REG CYREG_CM0_ISER
#define ADC_IRQ__INTC_SET_PD_REG CYREG_CM0_ISPR

/* LED_A */
#define LED_A__0__DR CYREG_GPIO_PRT1_DR
#define LED_A__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED_A__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED_A__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED_A__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED_A__0__HSIOM_MASK 0xF0000000u
#define LED_A__0__HSIOM_SHIFT 28u
#define LED_A__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_A__0__INTR CYREG_GPIO_PRT1_INTR
#define LED_A__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_A__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED_A__0__MASK 0x80u
#define LED_A__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define LED_A__0__OUT_SEL_SHIFT 14u
#define LED_A__0__OUT_SEL_VAL 3u
#define LED_A__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED_A__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED_A__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED_A__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED_A__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED_A__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED_A__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED_A__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED_A__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED_A__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED_A__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED_A__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED_A__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED_A__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED_A__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED_A__0__PC CYREG_GPIO_PRT1_PC
#define LED_A__0__PC2 CYREG_GPIO_PRT1_PC2
#define LED_A__0__PORT 1u
#define LED_A__0__PS CYREG_GPIO_PRT1_PS
#define LED_A__0__SHIFT 7
#define LED_A__DR CYREG_GPIO_PRT1_DR
#define LED_A__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED_A__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED_A__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED_A__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_A__INTR CYREG_GPIO_PRT1_INTR
#define LED_A__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_A__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED_A__MASK 0x80u
#define LED_A__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED_A__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED_A__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED_A__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED_A__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED_A__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED_A__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED_A__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED_A__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED_A__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED_A__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED_A__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED_A__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED_A__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED_A__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED_A__PC CYREG_GPIO_PRT1_PC
#define LED_A__PC2 CYREG_GPIO_PRT1_PC2
#define LED_A__PORT 1u
#define LED_A__PS CYREG_GPIO_PRT1_PS
#define LED_A__SHIFT 7

/* LED_B */
#define LED_B__0__DR CYREG_GPIO_PRT1_DR
#define LED_B__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED_B__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED_B__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED_B__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED_B__0__HSIOM_MASK 0x00F00000u
#define LED_B__0__HSIOM_SHIFT 20u
#define LED_B__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_B__0__INTR CYREG_GPIO_PRT1_INTR
#define LED_B__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_B__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED_B__0__MASK 0x20u
#define LED_B__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define LED_B__0__OUT_SEL_SHIFT 10u
#define LED_B__0__OUT_SEL_VAL 0u
#define LED_B__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED_B__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED_B__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED_B__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED_B__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED_B__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED_B__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED_B__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED_B__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED_B__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED_B__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED_B__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED_B__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED_B__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED_B__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED_B__0__PC CYREG_GPIO_PRT1_PC
#define LED_B__0__PC2 CYREG_GPIO_PRT1_PC2
#define LED_B__0__PORT 1u
#define LED_B__0__PS CYREG_GPIO_PRT1_PS
#define LED_B__0__SHIFT 5
#define LED_B__DR CYREG_GPIO_PRT1_DR
#define LED_B__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED_B__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED_B__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED_B__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_B__INTR CYREG_GPIO_PRT1_INTR
#define LED_B__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_B__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED_B__MASK 0x20u
#define LED_B__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED_B__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED_B__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED_B__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED_B__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED_B__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED_B__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED_B__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED_B__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED_B__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED_B__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED_B__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED_B__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED_B__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED_B__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED_B__PC CYREG_GPIO_PRT1_PC
#define LED_B__PC2 CYREG_GPIO_PRT1_PC2
#define LED_B__PORT 1u
#define LED_B__PS CYREG_GPIO_PRT1_PS
#define LED_B__SHIFT 5

/* LED_C */
#define LED_C__0__DR CYREG_GPIO_PRT1_DR
#define LED_C__0__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED_C__0__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED_C__0__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED_C__0__HSIOM CYREG_HSIOM_PORT_SEL1
#define LED_C__0__HSIOM_MASK 0x0F000000u
#define LED_C__0__HSIOM_SHIFT 24u
#define LED_C__0__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_C__0__INTR CYREG_GPIO_PRT1_INTR
#define LED_C__0__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_C__0__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED_C__0__MASK 0x40u
#define LED_C__0__OUT_SEL CYREG_UDB_PA1_CFG10
#define LED_C__0__OUT_SEL_SHIFT 12u
#define LED_C__0__OUT_SEL_VAL 1u
#define LED_C__0__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED_C__0__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED_C__0__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED_C__0__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED_C__0__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED_C__0__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED_C__0__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED_C__0__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED_C__0__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED_C__0__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED_C__0__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED_C__0__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED_C__0__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED_C__0__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED_C__0__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED_C__0__PC CYREG_GPIO_PRT1_PC
#define LED_C__0__PC2 CYREG_GPIO_PRT1_PC2
#define LED_C__0__PORT 1u
#define LED_C__0__PS CYREG_GPIO_PRT1_PS
#define LED_C__0__SHIFT 6
#define LED_C__DR CYREG_GPIO_PRT1_DR
#define LED_C__DR_CLR CYREG_GPIO_PRT1_DR_CLR
#define LED_C__DR_INV CYREG_GPIO_PRT1_DR_INV
#define LED_C__DR_SET CYREG_GPIO_PRT1_DR_SET
#define LED_C__INTCFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_C__INTR CYREG_GPIO_PRT1_INTR
#define LED_C__INTR_CFG CYREG_GPIO_PRT1_INTR_CFG
#define LED_C__INTSTAT CYREG_GPIO_PRT1_INTR
#define LED_C__MASK 0x40u
#define LED_C__PA__CFG0 CYREG_UDB_PA1_CFG0
#define LED_C__PA__CFG1 CYREG_UDB_PA1_CFG1
#define LED_C__PA__CFG10 CYREG_UDB_PA1_CFG10
#define LED_C__PA__CFG11 CYREG_UDB_PA1_CFG11
#define LED_C__PA__CFG12 CYREG_UDB_PA1_CFG12
#define LED_C__PA__CFG13 CYREG_UDB_PA1_CFG13
#define LED_C__PA__CFG14 CYREG_UDB_PA1_CFG14
#define LED_C__PA__CFG2 CYREG_UDB_PA1_CFG2
#define LED_C__PA__CFG3 CYREG_UDB_PA1_CFG3
#define LED_C__PA__CFG4 CYREG_UDB_PA1_CFG4
#define LED_C__PA__CFG5 CYREG_UDB_PA1_CFG5
#define LED_C__PA__CFG6 CYREG_UDB_PA1_CFG6
#define LED_C__PA__CFG7 CYREG_UDB_PA1_CFG7
#define LED_C__PA__CFG8 CYREG_UDB_PA1_CFG8
#define LED_C__PA__CFG9 CYREG_UDB_PA1_CFG9
#define LED_C__PC CYREG_GPIO_PRT1_PC
#define LED_C__PC2 CYREG_GPIO_PRT1_PC2
#define LED_C__PORT 1u
#define LED_C__PS CYREG_GPIO_PRT1_PS
#define LED_C__SHIFT 6

/* LED_D */
#define LED_D__0__DR CYREG_GPIO_PRT3_DR
#define LED_D__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_D__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_D__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_D__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define LED_D__0__HSIOM_MASK 0x0000000Fu
#define LED_D__0__HSIOM_SHIFT 0u
#define LED_D__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_D__0__INTR CYREG_GPIO_PRT3_INTR
#define LED_D__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_D__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_D__0__MASK 0x01u
#define LED_D__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define LED_D__0__OUT_SEL_SHIFT 0u
#define LED_D__0__OUT_SEL_VAL 2u
#define LED_D__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_D__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_D__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_D__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_D__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_D__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_D__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_D__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_D__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_D__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_D__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_D__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_D__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_D__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_D__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_D__0__PC CYREG_GPIO_PRT3_PC
#define LED_D__0__PC2 CYREG_GPIO_PRT3_PC2
#define LED_D__0__PORT 3u
#define LED_D__0__PS CYREG_GPIO_PRT3_PS
#define LED_D__0__SHIFT 0
#define LED_D__DR CYREG_GPIO_PRT3_DR
#define LED_D__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_D__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_D__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_D__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_D__INTR CYREG_GPIO_PRT3_INTR
#define LED_D__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_D__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_D__MASK 0x01u
#define LED_D__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_D__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_D__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_D__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_D__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_D__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_D__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_D__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_D__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_D__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_D__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_D__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_D__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_D__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_D__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_D__PC CYREG_GPIO_PRT3_PC
#define LED_D__PC2 CYREG_GPIO_PRT3_PC2
#define LED_D__PORT 3u
#define LED_D__PS CYREG_GPIO_PRT3_PS
#define LED_D__SHIFT 0

/* LED_E */
#define LED_E__0__DR CYREG_GPIO_PRT3_DR
#define LED_E__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_E__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_E__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_E__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define LED_E__0__HSIOM_MASK 0x000000F0u
#define LED_E__0__HSIOM_SHIFT 4u
#define LED_E__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_E__0__INTR CYREG_GPIO_PRT3_INTR
#define LED_E__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_E__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_E__0__MASK 0x02u
#define LED_E__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define LED_E__0__OUT_SEL_SHIFT 2u
#define LED_E__0__OUT_SEL_VAL 1u
#define LED_E__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_E__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_E__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_E__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_E__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_E__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_E__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_E__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_E__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_E__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_E__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_E__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_E__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_E__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_E__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_E__0__PC CYREG_GPIO_PRT3_PC
#define LED_E__0__PC2 CYREG_GPIO_PRT3_PC2
#define LED_E__0__PORT 3u
#define LED_E__0__PS CYREG_GPIO_PRT3_PS
#define LED_E__0__SHIFT 1
#define LED_E__DR CYREG_GPIO_PRT3_DR
#define LED_E__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_E__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_E__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_E__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_E__INTR CYREG_GPIO_PRT3_INTR
#define LED_E__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_E__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_E__MASK 0x02u
#define LED_E__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_E__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_E__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_E__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_E__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_E__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_E__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_E__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_E__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_E__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_E__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_E__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_E__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_E__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_E__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_E__PC CYREG_GPIO_PRT3_PC
#define LED_E__PC2 CYREG_GPIO_PRT3_PC2
#define LED_E__PORT 3u
#define LED_E__PS CYREG_GPIO_PRT3_PS
#define LED_E__SHIFT 1

/* LED_F */
#define LED_F__0__DR CYREG_GPIO_PRT3_DR
#define LED_F__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_F__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_F__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_F__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define LED_F__0__HSIOM_MASK 0x00000F00u
#define LED_F__0__HSIOM_SHIFT 8u
#define LED_F__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_F__0__INTR CYREG_GPIO_PRT3_INTR
#define LED_F__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_F__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_F__0__MASK 0x04u
#define LED_F__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define LED_F__0__OUT_SEL_SHIFT 4u
#define LED_F__0__OUT_SEL_VAL 3u
#define LED_F__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_F__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_F__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_F__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_F__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_F__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_F__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_F__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_F__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_F__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_F__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_F__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_F__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_F__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_F__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_F__0__PC CYREG_GPIO_PRT3_PC
#define LED_F__0__PC2 CYREG_GPIO_PRT3_PC2
#define LED_F__0__PORT 3u
#define LED_F__0__PS CYREG_GPIO_PRT3_PS
#define LED_F__0__SHIFT 2
#define LED_F__DR CYREG_GPIO_PRT3_DR
#define LED_F__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_F__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_F__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_F__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_F__INTR CYREG_GPIO_PRT3_INTR
#define LED_F__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_F__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_F__MASK 0x04u
#define LED_F__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_F__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_F__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_F__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_F__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_F__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_F__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_F__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_F__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_F__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_F__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_F__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_F__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_F__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_F__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_F__PC CYREG_GPIO_PRT3_PC
#define LED_F__PC2 CYREG_GPIO_PRT3_PC2
#define LED_F__PORT 3u
#define LED_F__PS CYREG_GPIO_PRT3_PS
#define LED_F__SHIFT 2

/* LED_G */
#define LED_G__0__DR CYREG_GPIO_PRT3_DR
#define LED_G__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_G__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_G__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_G__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define LED_G__0__HSIOM_MASK 0x0000F000u
#define LED_G__0__HSIOM_SHIFT 12u
#define LED_G__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_G__0__INTR CYREG_GPIO_PRT3_INTR
#define LED_G__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_G__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_G__0__MASK 0x08u
#define LED_G__0__OUT_SEL CYREG_UDB_PA3_CFG10
#define LED_G__0__OUT_SEL_SHIFT 6u
#define LED_G__0__OUT_SEL_VAL 0u
#define LED_G__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_G__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_G__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_G__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_G__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_G__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_G__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_G__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_G__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_G__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_G__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_G__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_G__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_G__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_G__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_G__0__PC CYREG_GPIO_PRT3_PC
#define LED_G__0__PC2 CYREG_GPIO_PRT3_PC2
#define LED_G__0__PORT 3u
#define LED_G__0__PS CYREG_GPIO_PRT3_PS
#define LED_G__0__SHIFT 3
#define LED_G__DR CYREG_GPIO_PRT3_DR
#define LED_G__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define LED_G__DR_INV CYREG_GPIO_PRT3_DR_INV
#define LED_G__DR_SET CYREG_GPIO_PRT3_DR_SET
#define LED_G__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_G__INTR CYREG_GPIO_PRT3_INTR
#define LED_G__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define LED_G__INTSTAT CYREG_GPIO_PRT3_INTR
#define LED_G__MASK 0x08u
#define LED_G__PA__CFG0 CYREG_UDB_PA3_CFG0
#define LED_G__PA__CFG1 CYREG_UDB_PA3_CFG1
#define LED_G__PA__CFG10 CYREG_UDB_PA3_CFG10
#define LED_G__PA__CFG11 CYREG_UDB_PA3_CFG11
#define LED_G__PA__CFG12 CYREG_UDB_PA3_CFG12
#define LED_G__PA__CFG13 CYREG_UDB_PA3_CFG13
#define LED_G__PA__CFG14 CYREG_UDB_PA3_CFG14
#define LED_G__PA__CFG2 CYREG_UDB_PA3_CFG2
#define LED_G__PA__CFG3 CYREG_UDB_PA3_CFG3
#define LED_G__PA__CFG4 CYREG_UDB_PA3_CFG4
#define LED_G__PA__CFG5 CYREG_UDB_PA3_CFG5
#define LED_G__PA__CFG6 CYREG_UDB_PA3_CFG6
#define LED_G__PA__CFG7 CYREG_UDB_PA3_CFG7
#define LED_G__PA__CFG8 CYREG_UDB_PA3_CFG8
#define LED_G__PA__CFG9 CYREG_UDB_PA3_CFG9
#define LED_G__PC CYREG_GPIO_PRT3_PC
#define LED_G__PC2 CYREG_GPIO_PRT3_PC2
#define LED_G__PORT 3u
#define LED_G__PS CYREG_GPIO_PRT3_PS
#define LED_G__SHIFT 3

/* UART_1_rx */
#define UART_1_rx__0__DR CYREG_GPIO_PRT0_DR
#define UART_1_rx__0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define UART_1_rx__0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define UART_1_rx__0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define UART_1_rx__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define UART_1_rx__0__HSIOM_MASK 0x000F0000u
#define UART_1_rx__0__HSIOM_SHIFT 16u
#define UART_1_rx__0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_rx__0__INTR CYREG_GPIO_PRT0_INTR
#define UART_1_rx__0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_rx__0__INTSTAT CYREG_GPIO_PRT0_INTR
#define UART_1_rx__0__MASK 0x10u
#define UART_1_rx__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define UART_1_rx__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define UART_1_rx__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define UART_1_rx__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define UART_1_rx__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define UART_1_rx__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define UART_1_rx__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define UART_1_rx__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define UART_1_rx__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define UART_1_rx__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define UART_1_rx__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define UART_1_rx__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define UART_1_rx__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define UART_1_rx__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define UART_1_rx__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define UART_1_rx__0__PC CYREG_GPIO_PRT0_PC
#define UART_1_rx__0__PC2 CYREG_GPIO_PRT0_PC2
#define UART_1_rx__0__PORT 0u
#define UART_1_rx__0__PS CYREG_GPIO_PRT0_PS
#define UART_1_rx__0__SHIFT 4
#define UART_1_rx__DR CYREG_GPIO_PRT0_DR
#define UART_1_rx__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define UART_1_rx__DR_INV CYREG_GPIO_PRT0_DR_INV
#define UART_1_rx__DR_SET CYREG_GPIO_PRT0_DR_SET
#define UART_1_rx__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_rx__INTR CYREG_GPIO_PRT0_INTR
#define UART_1_rx__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_rx__INTSTAT CYREG_GPIO_PRT0_INTR
#define UART_1_rx__MASK 0x10u
#define UART_1_rx__PA__CFG0 CYREG_UDB_PA0_CFG0
#define UART_1_rx__PA__CFG1 CYREG_UDB_PA0_CFG1
#define UART_1_rx__PA__CFG10 CYREG_UDB_PA0_CFG10
#define UART_1_rx__PA__CFG11 CYREG_UDB_PA0_CFG11
#define UART_1_rx__PA__CFG12 CYREG_UDB_PA0_CFG12
#define UART_1_rx__PA__CFG13 CYREG_UDB_PA0_CFG13
#define UART_1_rx__PA__CFG14 CYREG_UDB_PA0_CFG14
#define UART_1_rx__PA__CFG2 CYREG_UDB_PA0_CFG2
#define UART_1_rx__PA__CFG3 CYREG_UDB_PA0_CFG3
#define UART_1_rx__PA__CFG4 CYREG_UDB_PA0_CFG4
#define UART_1_rx__PA__CFG5 CYREG_UDB_PA0_CFG5
#define UART_1_rx__PA__CFG6 CYREG_UDB_PA0_CFG6
#define UART_1_rx__PA__CFG7 CYREG_UDB_PA0_CFG7
#define UART_1_rx__PA__CFG8 CYREG_UDB_PA0_CFG8
#define UART_1_rx__PA__CFG9 CYREG_UDB_PA0_CFG9
#define UART_1_rx__PC CYREG_GPIO_PRT0_PC
#define UART_1_rx__PC2 CYREG_GPIO_PRT0_PC2
#define UART_1_rx__PORT 0u
#define UART_1_rx__PS CYREG_GPIO_PRT0_PS
#define UART_1_rx__SHIFT 4

/* UART_1_SCB */
#define UART_1_SCB__CTRL CYREG_SCB0_CTRL
#define UART_1_SCB__EZ_DATA000 CYREG_SCB0_EZ_DATA000
#define UART_1_SCB__EZ_DATA001 CYREG_SCB0_EZ_DATA001
#define UART_1_SCB__EZ_DATA002 CYREG_SCB0_EZ_DATA002
#define UART_1_SCB__EZ_DATA003 CYREG_SCB0_EZ_DATA003
#define UART_1_SCB__EZ_DATA004 CYREG_SCB0_EZ_DATA004
#define UART_1_SCB__EZ_DATA005 CYREG_SCB0_EZ_DATA005
#define UART_1_SCB__EZ_DATA006 CYREG_SCB0_EZ_DATA006
#define UART_1_SCB__EZ_DATA007 CYREG_SCB0_EZ_DATA007
#define UART_1_SCB__EZ_DATA008 CYREG_SCB0_EZ_DATA008
#define UART_1_SCB__EZ_DATA009 CYREG_SCB0_EZ_DATA009
#define UART_1_SCB__EZ_DATA010 CYREG_SCB0_EZ_DATA010
#define UART_1_SCB__EZ_DATA011 CYREG_SCB0_EZ_DATA011
#define UART_1_SCB__EZ_DATA012 CYREG_SCB0_EZ_DATA012
#define UART_1_SCB__EZ_DATA013 CYREG_SCB0_EZ_DATA013
#define UART_1_SCB__EZ_DATA014 CYREG_SCB0_EZ_DATA014
#define UART_1_SCB__EZ_DATA015 CYREG_SCB0_EZ_DATA015
#define UART_1_SCB__EZ_DATA016 CYREG_SCB0_EZ_DATA016
#define UART_1_SCB__EZ_DATA017 CYREG_SCB0_EZ_DATA017
#define UART_1_SCB__EZ_DATA018 CYREG_SCB0_EZ_DATA018
#define UART_1_SCB__EZ_DATA019 CYREG_SCB0_EZ_DATA019
#define UART_1_SCB__EZ_DATA020 CYREG_SCB0_EZ_DATA020
#define UART_1_SCB__EZ_DATA021 CYREG_SCB0_EZ_DATA021
#define UART_1_SCB__EZ_DATA022 CYREG_SCB0_EZ_DATA022
#define UART_1_SCB__EZ_DATA023 CYREG_SCB0_EZ_DATA023
#define UART_1_SCB__EZ_DATA024 CYREG_SCB0_EZ_DATA024
#define UART_1_SCB__EZ_DATA025 CYREG_SCB0_EZ_DATA025
#define UART_1_SCB__EZ_DATA026 CYREG_SCB0_EZ_DATA026
#define UART_1_SCB__EZ_DATA027 CYREG_SCB0_EZ_DATA027
#define UART_1_SCB__EZ_DATA028 CYREG_SCB0_EZ_DATA028
#define UART_1_SCB__EZ_DATA029 CYREG_SCB0_EZ_DATA029
#define UART_1_SCB__EZ_DATA030 CYREG_SCB0_EZ_DATA030
#define UART_1_SCB__EZ_DATA031 CYREG_SCB0_EZ_DATA031
#define UART_1_SCB__I2C_CFG CYREG_SCB0_I2C_CFG
#define UART_1_SCB__I2C_CTRL CYREG_SCB0_I2C_CTRL
#define UART_1_SCB__I2C_M_CMD CYREG_SCB0_I2C_M_CMD
#define UART_1_SCB__I2C_S_CMD CYREG_SCB0_I2C_S_CMD
#define UART_1_SCB__I2C_STATUS CYREG_SCB0_I2C_STATUS
#define UART_1_SCB__INTR_CAUSE CYREG_SCB0_INTR_CAUSE
#define UART_1_SCB__INTR_I2C_EC CYREG_SCB0_INTR_I2C_EC
#define UART_1_SCB__INTR_I2C_EC_MASK CYREG_SCB0_INTR_I2C_EC_MASK
#define UART_1_SCB__INTR_I2C_EC_MASKED CYREG_SCB0_INTR_I2C_EC_MASKED
#define UART_1_SCB__INTR_M CYREG_SCB0_INTR_M
#define UART_1_SCB__INTR_M_MASK CYREG_SCB0_INTR_M_MASK
#define UART_1_SCB__INTR_M_MASKED CYREG_SCB0_INTR_M_MASKED
#define UART_1_SCB__INTR_M_SET CYREG_SCB0_INTR_M_SET
#define UART_1_SCB__INTR_RX CYREG_SCB0_INTR_RX
#define UART_1_SCB__INTR_RX_MASK CYREG_SCB0_INTR_RX_MASK
#define UART_1_SCB__INTR_RX_MASKED CYREG_SCB0_INTR_RX_MASKED
#define UART_1_SCB__INTR_RX_SET CYREG_SCB0_INTR_RX_SET
#define UART_1_SCB__INTR_S CYREG_SCB0_INTR_S
#define UART_1_SCB__INTR_S_MASK CYREG_SCB0_INTR_S_MASK
#define UART_1_SCB__INTR_S_MASKED CYREG_SCB0_INTR_S_MASKED
#define UART_1_SCB__INTR_S_SET CYREG_SCB0_INTR_S_SET
#define UART_1_SCB__INTR_SPI_EC CYREG_SCB0_INTR_SPI_EC
#define UART_1_SCB__INTR_SPI_EC_MASK CYREG_SCB0_INTR_SPI_EC_MASK
#define UART_1_SCB__INTR_SPI_EC_MASKED CYREG_SCB0_INTR_SPI_EC_MASKED
#define UART_1_SCB__INTR_TX CYREG_SCB0_INTR_TX
#define UART_1_SCB__INTR_TX_MASK CYREG_SCB0_INTR_TX_MASK
#define UART_1_SCB__INTR_TX_MASKED CYREG_SCB0_INTR_TX_MASKED
#define UART_1_SCB__INTR_TX_SET CYREG_SCB0_INTR_TX_SET
#define UART_1_SCB__RX_CTRL CYREG_SCB0_RX_CTRL
#define UART_1_SCB__RX_FIFO_CTRL CYREG_SCB0_RX_FIFO_CTRL
#define UART_1_SCB__RX_FIFO_RD CYREG_SCB0_RX_FIFO_RD
#define UART_1_SCB__RX_FIFO_RD_SILENT CYREG_SCB0_RX_FIFO_RD_SILENT
#define UART_1_SCB__RX_FIFO_STATUS CYREG_SCB0_RX_FIFO_STATUS
#define UART_1_SCB__RX_MATCH CYREG_SCB0_RX_MATCH
#define UART_1_SCB__SPI_CTRL CYREG_SCB0_SPI_CTRL
#define UART_1_SCB__SPI_STATUS CYREG_SCB0_SPI_STATUS
#define UART_1_SCB__SS0_POSISTION 0u
#define UART_1_SCB__SS1_POSISTION 1u
#define UART_1_SCB__SS2_POSISTION 2u
#define UART_1_SCB__SS3_POSISTION 3u
#define UART_1_SCB__STATUS CYREG_SCB0_STATUS
#define UART_1_SCB__TX_CTRL CYREG_SCB0_TX_CTRL
#define UART_1_SCB__TX_FIFO_CTRL CYREG_SCB0_TX_FIFO_CTRL
#define UART_1_SCB__TX_FIFO_STATUS CYREG_SCB0_TX_FIFO_STATUS
#define UART_1_SCB__TX_FIFO_WR CYREG_SCB0_TX_FIFO_WR
#define UART_1_SCB__UART_CTRL CYREG_SCB0_UART_CTRL
#define UART_1_SCB__UART_FLOW_CTRL CYREG_SCB0_UART_FLOW_CTRL
#define UART_1_SCB__UART_RX_CTRL CYREG_SCB0_UART_RX_CTRL
#define UART_1_SCB__UART_RX_STATUS CYREG_SCB0_UART_RX_STATUS
#define UART_1_SCB__UART_TX_CTRL CYREG_SCB0_UART_TX_CTRL

/* UART_1_SCBCLK */
#define UART_1_SCBCLK__CTRL_REGISTER CYREG_PERI_PCLK_CTL01
#define UART_1_SCBCLK__DIV_ID 0x00000041u
#define UART_1_SCBCLK__DIV_REGISTER CYREG_PERI_DIV_16_CTL01
#define UART_1_SCBCLK__PA_DIV_ID 0x000000FFu

/* UART_1_tx */
#define UART_1_tx__0__DR CYREG_GPIO_PRT0_DR
#define UART_1_tx__0__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define UART_1_tx__0__DR_INV CYREG_GPIO_PRT0_DR_INV
#define UART_1_tx__0__DR_SET CYREG_GPIO_PRT0_DR_SET
#define UART_1_tx__0__HSIOM CYREG_HSIOM_PORT_SEL0
#define UART_1_tx__0__HSIOM_MASK 0x00F00000u
#define UART_1_tx__0__HSIOM_SHIFT 20u
#define UART_1_tx__0__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_tx__0__INTR CYREG_GPIO_PRT0_INTR
#define UART_1_tx__0__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_tx__0__INTSTAT CYREG_GPIO_PRT0_INTR
#define UART_1_tx__0__MASK 0x20u
#define UART_1_tx__0__OUT_SEL CYREG_UDB_PA0_CFG10
#define UART_1_tx__0__OUT_SEL_SHIFT 10u
#define UART_1_tx__0__OUT_SEL_VAL -1u
#define UART_1_tx__0__PA__CFG0 CYREG_UDB_PA0_CFG0
#define UART_1_tx__0__PA__CFG1 CYREG_UDB_PA0_CFG1
#define UART_1_tx__0__PA__CFG10 CYREG_UDB_PA0_CFG10
#define UART_1_tx__0__PA__CFG11 CYREG_UDB_PA0_CFG11
#define UART_1_tx__0__PA__CFG12 CYREG_UDB_PA0_CFG12
#define UART_1_tx__0__PA__CFG13 CYREG_UDB_PA0_CFG13
#define UART_1_tx__0__PA__CFG14 CYREG_UDB_PA0_CFG14
#define UART_1_tx__0__PA__CFG2 CYREG_UDB_PA0_CFG2
#define UART_1_tx__0__PA__CFG3 CYREG_UDB_PA0_CFG3
#define UART_1_tx__0__PA__CFG4 CYREG_UDB_PA0_CFG4
#define UART_1_tx__0__PA__CFG5 CYREG_UDB_PA0_CFG5
#define UART_1_tx__0__PA__CFG6 CYREG_UDB_PA0_CFG6
#define UART_1_tx__0__PA__CFG7 CYREG_UDB_PA0_CFG7
#define UART_1_tx__0__PA__CFG8 CYREG_UDB_PA0_CFG8
#define UART_1_tx__0__PA__CFG9 CYREG_UDB_PA0_CFG9
#define UART_1_tx__0__PC CYREG_GPIO_PRT0_PC
#define UART_1_tx__0__PC2 CYREG_GPIO_PRT0_PC2
#define UART_1_tx__0__PORT 0u
#define UART_1_tx__0__PS CYREG_GPIO_PRT0_PS
#define UART_1_tx__0__SHIFT 5
#define UART_1_tx__DR CYREG_GPIO_PRT0_DR
#define UART_1_tx__DR_CLR CYREG_GPIO_PRT0_DR_CLR
#define UART_1_tx__DR_INV CYREG_GPIO_PRT0_DR_INV
#define UART_1_tx__DR_SET CYREG_GPIO_PRT0_DR_SET
#define UART_1_tx__INTCFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_tx__INTR CYREG_GPIO_PRT0_INTR
#define UART_1_tx__INTR_CFG CYREG_GPIO_PRT0_INTR_CFG
#define UART_1_tx__INTSTAT CYREG_GPIO_PRT0_INTR
#define UART_1_tx__MASK 0x20u
#define UART_1_tx__PA__CFG0 CYREG_UDB_PA0_CFG0
#define UART_1_tx__PA__CFG1 CYREG_UDB_PA0_CFG1
#define UART_1_tx__PA__CFG10 CYREG_UDB_PA0_CFG10
#define UART_1_tx__PA__CFG11 CYREG_UDB_PA0_CFG11
#define UART_1_tx__PA__CFG12 CYREG_UDB_PA0_CFG12
#define UART_1_tx__PA__CFG13 CYREG_UDB_PA0_CFG13
#define UART_1_tx__PA__CFG14 CYREG_UDB_PA0_CFG14
#define UART_1_tx__PA__CFG2 CYREG_UDB_PA0_CFG2
#define UART_1_tx__PA__CFG3 CYREG_UDB_PA0_CFG3
#define UART_1_tx__PA__CFG4 CYREG_UDB_PA0_CFG4
#define UART_1_tx__PA__CFG5 CYREG_UDB_PA0_CFG5
#define UART_1_tx__PA__CFG6 CYREG_UDB_PA0_CFG6
#define UART_1_tx__PA__CFG7 CYREG_UDB_PA0_CFG7
#define UART_1_tx__PA__CFG8 CYREG_UDB_PA0_CFG8
#define UART_1_tx__PA__CFG9 CYREG_UDB_PA0_CFG9
#define UART_1_tx__PC CYREG_GPIO_PRT0_PC
#define UART_1_tx__PC2 CYREG_GPIO_PRT0_PC2
#define UART_1_tx__PORT 0u
#define UART_1_tx__PS CYREG_GPIO_PRT0_PS
#define UART_1_tx__SHIFT 5

/* binReg */
#define binReg_Sync_ctrl_reg__0__MASK 0x01u
#define binReg_Sync_ctrl_reg__0__POS 0
#define binReg_Sync_ctrl_reg__1__MASK 0x02u
#define binReg_Sync_ctrl_reg__1__POS 1
#define binReg_Sync_ctrl_reg__2__MASK 0x04u
#define binReg_Sync_ctrl_reg__2__POS 2
#define binReg_Sync_ctrl_reg__3__MASK 0x08u
#define binReg_Sync_ctrl_reg__3__POS 3
#define binReg_Sync_ctrl_reg__CONTROL_AUX_CTL_REG CYREG_UDB_W8_ACTL_03
#define binReg_Sync_ctrl_reg__CONTROL_REG CYREG_UDB_W8_CTL_03
#define binReg_Sync_ctrl_reg__CONTROL_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define binReg_Sync_ctrl_reg__COUNT_REG CYREG_UDB_W8_CTL_03
#define binReg_Sync_ctrl_reg__COUNT_ST_REG CYREG_UDB_CAT16_CTL_ST_03
#define binReg_Sync_ctrl_reg__MASK 0x0Fu
#define binReg_Sync_ctrl_reg__MASK_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define binReg_Sync_ctrl_reg__PER_CTL_AUX_CTL_REG CYREG_UDB_CAT16_ACTL_MSK_03
#define binReg_Sync_ctrl_reg__PERIOD_REG CYREG_UDB_W8_MSK_03

/* AnalogIn */
#define AnalogIn__0__DR CYREG_GPIO_PRT3_DR
#define AnalogIn__0__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define AnalogIn__0__DR_INV CYREG_GPIO_PRT3_DR_INV
#define AnalogIn__0__DR_SET CYREG_GPIO_PRT3_DR_SET
#define AnalogIn__0__HSIOM CYREG_HSIOM_PORT_SEL3
#define AnalogIn__0__HSIOM_MASK 0x00F00000u
#define AnalogIn__0__HSIOM_SHIFT 20u
#define AnalogIn__0__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define AnalogIn__0__INTR CYREG_GPIO_PRT3_INTR
#define AnalogIn__0__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define AnalogIn__0__INTSTAT CYREG_GPIO_PRT3_INTR
#define AnalogIn__0__MASK 0x20u
#define AnalogIn__0__PA__CFG0 CYREG_UDB_PA3_CFG0
#define AnalogIn__0__PA__CFG1 CYREG_UDB_PA3_CFG1
#define AnalogIn__0__PA__CFG10 CYREG_UDB_PA3_CFG10
#define AnalogIn__0__PA__CFG11 CYREG_UDB_PA3_CFG11
#define AnalogIn__0__PA__CFG12 CYREG_UDB_PA3_CFG12
#define AnalogIn__0__PA__CFG13 CYREG_UDB_PA3_CFG13
#define AnalogIn__0__PA__CFG14 CYREG_UDB_PA3_CFG14
#define AnalogIn__0__PA__CFG2 CYREG_UDB_PA3_CFG2
#define AnalogIn__0__PA__CFG3 CYREG_UDB_PA3_CFG3
#define AnalogIn__0__PA__CFG4 CYREG_UDB_PA3_CFG4
#define AnalogIn__0__PA__CFG5 CYREG_UDB_PA3_CFG5
#define AnalogIn__0__PA__CFG6 CYREG_UDB_PA3_CFG6
#define AnalogIn__0__PA__CFG7 CYREG_UDB_PA3_CFG7
#define AnalogIn__0__PA__CFG8 CYREG_UDB_PA3_CFG8
#define AnalogIn__0__PA__CFG9 CYREG_UDB_PA3_CFG9
#define AnalogIn__0__PC CYREG_GPIO_PRT3_PC
#define AnalogIn__0__PC2 CYREG_GPIO_PRT3_PC2
#define AnalogIn__0__PORT 3u
#define AnalogIn__0__PS CYREG_GPIO_PRT3_PS
#define AnalogIn__0__SHIFT 5
#define AnalogIn__DR CYREG_GPIO_PRT3_DR
#define AnalogIn__DR_CLR CYREG_GPIO_PRT3_DR_CLR
#define AnalogIn__DR_INV CYREG_GPIO_PRT3_DR_INV
#define AnalogIn__DR_SET CYREG_GPIO_PRT3_DR_SET
#define AnalogIn__INTCFG CYREG_GPIO_PRT3_INTR_CFG
#define AnalogIn__INTR CYREG_GPIO_PRT3_INTR
#define AnalogIn__INTR_CFG CYREG_GPIO_PRT3_INTR_CFG
#define AnalogIn__INTSTAT CYREG_GPIO_PRT3_INTR
#define AnalogIn__MASK 0x20u
#define AnalogIn__PA__CFG0 CYREG_UDB_PA3_CFG0
#define AnalogIn__PA__CFG1 CYREG_UDB_PA3_CFG1
#define AnalogIn__PA__CFG10 CYREG_UDB_PA3_CFG10
#define AnalogIn__PA__CFG11 CYREG_UDB_PA3_CFG11
#define AnalogIn__PA__CFG12 CYREG_UDB_PA3_CFG12
#define AnalogIn__PA__CFG13 CYREG_UDB_PA3_CFG13
#define AnalogIn__PA__CFG14 CYREG_UDB_PA3_CFG14
#define AnalogIn__PA__CFG2 CYREG_UDB_PA3_CFG2
#define AnalogIn__PA__CFG3 CYREG_UDB_PA3_CFG3
#define AnalogIn__PA__CFG4 CYREG_UDB_PA3_CFG4
#define AnalogIn__PA__CFG5 CYREG_UDB_PA3_CFG5
#define AnalogIn__PA__CFG6 CYREG_UDB_PA3_CFG6
#define AnalogIn__PA__CFG7 CYREG_UDB_PA3_CFG7
#define AnalogIn__PA__CFG8 CYREG_UDB_PA3_CFG8
#define AnalogIn__PA__CFG9 CYREG_UDB_PA3_CFG9
#define AnalogIn__PC CYREG_GPIO_PRT3_PC
#define AnalogIn__PC2 CYREG_GPIO_PRT3_PC2
#define AnalogIn__PORT 3u
#define AnalogIn__PS CYREG_GPIO_PRT3_PS
#define AnalogIn__SHIFT 5

/* Miscellaneous */
#define CY_VERSION "PSoC Creator  3.1"
#define CYDEV_BCLK__HFCLK__HZ 24000000U
#define CYDEV_BCLK__HFCLK__KHZ 24000U
#define CYDEV_BCLK__HFCLK__MHZ 24U
#define CYDEV_BCLK__SYSCLK__HZ 24000000U
#define CYDEV_BCLK__SYSCLK__KHZ 24000U
#define CYDEV_BCLK__SYSCLK__MHZ 24U
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PANTHER 6u
#define CYDEV_CHIP_DIE_PSOC4A 3u
#define CYDEV_CHIP_DIE_PSOC5LP 5u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC4
#define CYDEV_CHIP_JTAG_ID 0x0E34119Eu
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 3u
#define CYDEV_CHIP_MEMBER_4D 2u
#define CYDEV_CHIP_MEMBER_4F 4u
#define CYDEV_CHIP_MEMBER_5A 6u
#define CYDEV_CHIP_MEMBER_5B 5u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_4F
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PANTHER_ES0 0u
#define CYDEV_CHIP_REV_PANTHER_ES1 1u
#define CYDEV_CHIP_REV_PANTHER_PRODUCTION 1u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_4F_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_READ_ACCELERATOR 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_PROTECT_KILL 4
#define CYDEV_DEBUG_PROTECT_OPEN 1
#define CYDEV_DEBUG_PROTECT CYDEV_DEBUG_PROTECT_OPEN
#define CYDEV_DEBUG_PROTECT_PROTECTED 2
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_HEAP_SIZE 0x0100
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_STACK_SIZE 0x0400
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 1
#define CYDEV_VDDA 3.3
#define CYDEV_VDDA_MV 3300
#define CYDEV_VDDD 3.3
#define CYDEV_VDDD_MV 3300
#define CYDEV_VDDR 3.3
#define CYDEV_VDDR_MV 3300
#define CYIPBLOCK_m0s8bless_VERSION 1
#define CYIPBLOCK_m0s8cpussv2_VERSION 1
#define CYIPBLOCK_m0s8csd_VERSION 1
#define CYIPBLOCK_m0s8ioss_VERSION 1
#define CYIPBLOCK_m0s8lcd_VERSION 2
#define CYIPBLOCK_m0s8lpcomp_VERSION 2
#define CYIPBLOCK_m0s8peri_VERSION 1
#define CYIPBLOCK_m0s8scb_VERSION 2
#define CYIPBLOCK_m0s8srssv2_VERSION 1
#define CYIPBLOCK_m0s8tcpwm_VERSION 2
#define CYIPBLOCK_m0s8udbif_VERSION 1
#define CYIPBLOCK_s8pass4al_VERSION 1
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
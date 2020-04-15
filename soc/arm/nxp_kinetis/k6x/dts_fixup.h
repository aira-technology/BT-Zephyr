/* SPDX-License-Identifier: Apache-2.0 */

/* SoC level DTS fixup file */
#define DT_ADC_0_BASE_ADDRESS		DT_NXP_KINETIS_ADC16_4003B000_BASE_ADDRESS
#define DT_ADC_0_IRQ			DT_NXP_KINETIS_ADC16_4003B000_IRQ_0
#define DT_ADC_0_IRQ_PRI			DT_NXP_KINETIS_ADC16_4003B000_IRQ_0_PRIORITY
#define DT_ADC_0_NAME			DT_NXP_KINETIS_ADC16_4003B000_LABEL

#define DT_ADC_1_BASE_ADDRESS		DT_NXP_KINETIS_ADC16_400BB000_BASE_ADDRESS
#define DT_ADC_1_IRQ			DT_NXP_KINETIS_ADC16_400BB000_IRQ_0
#define DT_ADC_1_IRQ_PRI			DT_NXP_KINETIS_ADC16_400BB000_IRQ_0_PRIORITY
#define DT_ADC_1_NAME			DT_NXP_KINETIS_ADC16_400BB000_LABEL

#define DT_RTC_0_NAME				DT_LABEL(DT_INST(0, nxp_kinetis_rtc))

#define DT_FLASH_DEV_BASE_ADDRESS			DT_NXP_KINETIS_FTFE_40020000_BASE_ADDRESS
#define DT_FLASH_DEV_NAME				DT_NXP_KINETIS_FTFE_40020000_LABEL

#define DT_USBD_KINETIS_NAME		DT_NXP_KINETIS_USBD_40072000_LABEL
#define DT_USBD_KINETIS_IRQ			DT_NXP_KINETIS_USBD_40072000_IRQ_USB_OTG
#define DT_USBD_KINETIS_IRQ_PRI		DT_NXP_KINETIS_USBD_40072000_IRQ_USB_OTG_PRIORITY
#define DT_USBD_KINETIS_BASE_ADDRESS	DT_NXP_KINETIS_USBD_40072000_BASE_ADDRESS
#define DT_USBD_KINETIS_NUM_BIDIR_EP	DT_NXP_KINETIS_USBD_40072000_NUM_BIDIR_ENDPOINTS

#define DT_ETH_MCUX_0_NAME		DT_NXP_KINETIS_ETHERNET_400C0004_LABEL

#define DT_ETH_MCUX_0_MAC		DT_NXP_KINETIS_ETHERNET_400C0004_LOCAL_MAC_ADDRESS

/* IRQs */
#define DT_IRQ_ETH_IEEE1588_TMR		DT_NXP_KINETIS_PTP_400C0004_PTP_IRQ_IEEE1588_TMR
#define DT_IRQ_ETH_RX		DT_NXP_KINETIS_ETHERNET_400C0004_IRQ_RX
#define DT_IRQ_ETH_TX		DT_NXP_KINETIS_ETHERNET_400C0004_IRQ_TX
#define DT_IRQ_ETH_ERR_MISC		DT_NXP_KINETIS_ETHERNET_400C0004_IRQ_ERR_MISC
#define DT_ETH_MCUX_0_IRQ_PRI		DT_NXP_KINETIS_ETHERNET_400C0004_IRQ_RX_PRIORITY

#define DT_CAN_0_NAME			DT_NXP_KINETIS_FLEXCAN_40024000_LABEL

/* End of SoC Level DTS fixup file */

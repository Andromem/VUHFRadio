#ifndef PINMAPING_H_
#define PINMAPING_H_

#ifdef __cplusplus
extern "C" {
#endif

//Input Pin Mapping
#define GPIO_IN_PTT_U						15		//Input PTT of UHF
#define GPIO_IN_PTT_V						10		//Input PTT of VHF
#define GPIO_IN_IRQ_U						16		//Input IRQ of UHF
#define GPIO_IN_IRQ_V						17		//Input IRQ of VHF
#define GPIO_IN_DCLK_U						27		//Input DCLK of UHF	PB11
#define GPIO_IN_DCLK_V						8		//Input DCLK of VHF PA8
#define GPIO_IN_DATA_U						26		//Input DATA of UHF PB10
#define GPIO_IN_DATA_V						9		//Input DATA of VHF PA9

//Output Pin Mapping
#define GPIO_OUT_LED0						3		//Output LED 0
#define GPIO_OUT_LED1						2		//Output LED 1
#define GPIO_OUT_LED2						1		//Output LED 2
#define GPIO_OUT_LED3						0		//Output LED 3
#define GPIO_OUT_LED4						47		//Output LED 4
#define GPIO_OUT_LED5						46		//Output LED 5
#define GPIO_OUT_CS_U						18		//Output CS of UHF
#define GPIO_OUT_CS_V						28		//Output CS of VHF

//ADC Pin Mapping
#define	GPIO_ADC_I_VCC_U					5		//ADC Input Current AX5043 UHF Radio
#define	GPIO_ADC_I_VCC_V					4		//ADC Input Current AX5043 VHF Radio
#define	GPIO_ADC_I_VCC_M					6		//ADC Input Current MCU/Amps
#define	GPIO_ADC_I_5V						7		//ADC Input Current USB/5V

//ADC Channel Mapping
#define ADC_CH_I_VCC_U						5		//ADC Channel Current AX5043 UHF Radio
#define ADC_CH_I_VCC_V						4		//ADC Channel Current AX5043 VHF Radio
#define ADC_CH_I_VCC_M						6		//ADC Channel Current MCU/Amps
#define ADC_CH_I_5V							7		//ADC Channel Current USB/5V


#ifdef __cplusplus
}
#endif

#endif /* PINMAPING_H_ */

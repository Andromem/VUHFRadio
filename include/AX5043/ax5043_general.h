#ifndef AX5043_AX5043_GENERAL_H_
#define AX5043_AX5043_GENERAL_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "ax5043_interface.h"
#include "ax5043_regs.h"

//Register Configuration of RADIOSTATE Register
#define RADIOSTATE_MASK						0x0F	//RADIOSTATE Bit Values Mask (for RadioState)
//PFSYSCLK Bits: Radio Controller State Bit Values
typedef enum {
	RadioState_Idle = 0,			//Radio State Idle
	RadioState_Powerdown = 1,		//Radio State Powerdown
	RadioState_TXPLLSettings = 4,	//Radio State TX PLL Settings
	RadioState_TX = 6,				//Radio State TX
	RadioState_TXTail = 7,			//Radio State TX Tail
	RadioState_RXPLLSettings = 8,	//Radio State RX PLL Settings
	RadioState_RXAntSelection = 9,	//Radio State RX Antenna Selection
	RadioState_RXPreamble1 = 12,	//Radio State RX Preamble 1
	RadioState_RXPreamble2 = 13,	//Radio State RX Preamble 2
	RadioState_RXPreamble3 = 14,	//Radio State RX Preamble 3
	RadioState_RX = 15				//Radio State RX
} RadioState;

//Register Configuration of XTALSTATUS Register
#define XTALSTATUS_MASK						0x01	//XTALSTATUS Bit Values Mask

//Register Configuration of DIVERSITY Register
#define DIVERSITY_DIVENA_MASK				0x01	//DIVENA Bit Value Mask
#define DIVERSITY_ANTSEL_MASK				0x02	//ANTSEL Bit Value Mask

//Register Configuration of XTALCAP Register
#define XTALCAP_MASK						0x3F	//Load Capacitance Configuration, For XTALCAP(5:0) != 0, CL = 8pF + 0.5pF*XTALCAP(5:0)

uint8_t AX5043GeneralRevision(uint8_t interfaceID);
uint8_t AX5043GeneralScratch(uint8_t interfaceID);
RadioState AX5043GeneralRadioState(uint8_t interfaceID);
uint8_t AX5043GeneralXTALStatus(uint8_t interfaceID);
uint8_t AX5043GeneralRSSI(uint8_t interfaceID);
void AX5043GeneralSetBackgroundNoise(uint8_t interfaceID, uint8_t noise);
uint8_t AX5043GeneralGetBackgroundNoise(uint8_t interfaceID);
void AX5043GeneralSetEnableAntennaDiversity(uint8_t interfaceID, uint8_t antennaDiversity);
uint8_t AX5043GeneralGetAntennaDiversity(uint8_t interfaceID);
void AX5043GeneralSetAntennaSelection(uint8_t interfaceID, uint8_t antennaSelect);
uint8_t AX5043GeneralGetAntennaSelection(uint8_t interfaceID);
void AX5043GeneralSetXTALLoadCap(uint8_t interfaceID, uint8_t cap);
uint8_t AX5043GeneralGetXTALLoadCap(uint8_t interfaceID);

#ifdef __cplusplus
}
#endif

#endif /* AX5043_AX5043_GENERAL_H_ */
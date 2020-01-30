#ifndef PHASECUT_H_INCLUDED
#define PHASECUT_H_INCLUDED
#include "EmbeddedSwitchConstants.h"

volatile uint8_t smoothDimActive = 0;
//volatile uint8_t phaseCutEnable = 0;
uint32_t allSwitchTiming[MAX_NUMBER_LED+2];
volatile uint8_t SwitchTimingIndex = 0;

//uint16_t map(uint16_t x, uint8_t in_min, uint8_t in_max, uint16_t out_min, uint16_t out_max);
void sortTimings(void);
void setPhaseCut(uint8_t ledno, uint8_t state);
//uint16_t calculateCmpValue(uint16_t timingMicroSec);
uint16_t calculateCmpValue(uint8_t dim_level);
void updateAllTimings (void);
void phaseCutInit(void);
void setLed (uint16_t timingValue);
void smoothDimHandler(void);

extern struct led
{
    uint8_t state;
    uint8_t config;
    uint32_t phaseCutTime;
    volatile uint32_t smoothDimTime;
};

extern struct led arr_led[MAX_NUMBER_LED];


#endif
#include "ADC_Interface.h"
#include <avr/interrupt.h>

#define ADCSRA_InterruptMask    0x08
#define ADCSRA_StateMask        0x80
#define ADMUX_ChannelMask       0x1F

static void (*ADC_CallBack)(uint16_t) = 0;

const ADC_Config_t Default_Config = {
    .Vref = ADC_AVCC, .Adjust = ADC_RightAdjust, .Prescaler = ADC_Prescaler64,
    .Mode = ADC_SingleConversionMode, .TriggerSource = ADC_FreeRunning,
    .Interrupt = ADC_InterruptDisable, .State = ADC_Enable
};

void ADC_Init(const ADC_Config_t * Config)
{
    if(Config != NULL)
    {
        ADMUX = (ADMUX & ~0xC0) | (Config->Vref & 0xC0);
        ADMUX = (ADMUX & ~0x80) | (Config->Adjust & 0x80);
        
        if(Config->Mode == ADC_AutoConversionMode) {
            ADCSRA |= (1 << Bit_ADATE); 
        } else {
            ADCSRA &= ~(1 << Bit_ADATE);
        }

        ADCSRA = (ADCSRA & ~ADCSRA_InterruptMask) | (Config->Interrupt & ADCSRA_InterruptMask);
        ADCSRA = (ADCSRA & ~ADCSRA_StateMask) | (Config->State & ADCSRA_StateMask);
    }
}

uint16_t ADC_ReadChannelPolling(uint8_t ADC_Channel)
{
    uint16_t DigitalVolt = 0;

    // Configure Channel
    ADMUX = (ADMUX & ~ADMUX_ChannelMask) | (ADC_Channel & ADMUX_ChannelMask);

    // Start Conversion
    ADCSRA |= (1 << Bit_ADSC);

    // Wait for finish
    while (ADCSRA & (1 << Bit_ADSC));

    // Read and Adjust
    if (ADMUX & (1 << Bit_ADLAR)) // Left Adjust
    {
        DigitalVolt = ADCH;
    }
    else // Right Adjust
    {
        DigitalVolt = ((uint16_t)ADCH << 8) | ADCL;
    }

    return DigitalVolt;
}

void ADC_StartConversionInterrupt(uint8_t ADC_Channel)
{
    ADMUX = (ADMUX & ~ADMUX_ChannelMask) | (ADC_Channel & ADMUX_ChannelMask);
    ADCSRA |= (1 << Bit_ADIE) | (1 << Bit_ADSC);
}

void ADC_SetCallBack(void(*PF)(uint16_t ADCResult))
{
    ADC_CallBack = PF;
}

ISR(ADC_vect)
{
    uint16_t result = ((uint16_t)ADCH << 8) | ADCL;
    if (ADC_CallBack != 0) {
        ADC_CallBack(result);
    }
}
#ifndef ADC_PRIVATE_H
#define ADC_PRIVATE_H

typedef enum { ADC_Disable, ADC_Enable = 0x80 } ADC_Control_t;
typedef enum { ADC_SingleConversionMode, ADC_AutoConversionMode = 0x20 } ADC_ModeSelection_t;
typedef enum { ADC_InterruptDisable, ADC_InterruptEnable = 0x08 } ADC_InterruptState_t;
typedef enum { ADC_Prescaler2 = 1, ADC_Prescaler4, ADC_Prescaler8, ADC_Prescaler16, ADC_Prescaler32, ADC_Prescaler64, ADC_Prescaler128 } ADC_ClockSelect_t;
typedef enum { Bit_ADPS0, Bit_ADPS1, Bit_ADPS2, Bit_ADIE, Bit_ADIF, Bit_ADATE, Bit_ADSC, Bit_ADEN } ADC_ADCSRA_t;
typedef enum { ADC_AREF, ADC_AVCC = 0x40, ADC_Internal_2_56V = 0xC0 } ADC_Vref_t;
typedef enum { ADC_RightAdjust, ADC_LeftAdjust = 0x80 } ADC_AdjustResult_t;
typedef enum { ADC_FreeRunning = 0x00, ADC_AnalogComp = 0x20, ADC_EXTI0 = 0x40, ADC_T0CTC = 0x60, ADC_T0OVF = 0x80, ADC_T1CTCB = 0xA0, ADC_T1OVF = 0xC0, ADC_T1ICU = 0xE0 } ADC_TriggerSource_t;

typedef struct {
    ADC_Vref_t Vref;
    ADC_AdjustResult_t Adjust;
    ADC_ClockSelect_t Prescaler;
    ADC_ModeSelection_t Mode;
    ADC_TriggerSource_t TriggerSource;
    ADC_InterruptState_t Interrupt;
    ADC_Control_t State;
} ADC_Config_t;

#endif
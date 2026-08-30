#include "Hal/LCD/LCD_Interface.h"
#include "Hal/Button/Button_Interface.h"
#include "util/delay.h"
#include "Mcal/EXTI/EXTI_Interface.h"
#include "Mcal/GIE/GIE_Interface.h"
#include "Mcal/ADC/ADC_Interface.h"
#include "Mcal/DIO/DIO_Interface.h"

void main(void)
{
    ADC_Config_t ADC_Con;

    ADC_Con.Vref          = ADC_AVCC;
    ADC_Con.Adjust        = ADC_RightAdjust;
    ADC_Con.Prescaler     = ADC_Prescaler64;
    ADC_Con.Mode          = ADC_SingleConversionMode;
    ADC_Con.TriggerSource = ADC_FreeRunning;
    ADC_Con.Interrupt     = ADC_InterruptDisable;
    ADC_Con.State         = ADC_Enable;

    DIO_DirectionSelectorPin(DIO_GroupA, DIO_Pin0, DIO_InputFor1Pin);

    LCD_Init();
    ADC_Init(&ADC_Con);

    uint16_t DigitalValue;

    while(1)
    {
        DigitalValue = ADC_ReadChannelPolling(0);

        LCD_voidGoToRowCol(0, 0);          
        LCD_voidWriteNumber(DigitalValue); 
        _delay_ms(100);
        LCD_voidClear();
    }
}
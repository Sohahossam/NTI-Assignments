#ifndef F_CPU
#define F_CPU 8000000UL
#endif
#include <util/delay.h>
#include "Buzzer_Interface.h"
#include "Buzzer_Config.h"

void Buzzer_Init(uint8_t BuzzerGroup, uint8_t BuzzerPin )
{
    DIO_DirectionSelectforPin(BuzzerGroup,BuzzerPin,DIO_Outputfor1Pin);
}

void Buzzer_On(uint8_t BuzzerGroup, uint8_t BuzzerPin , uint8_t ConnectionType)
{
    if(ConnectionType==Buzzer_SourceConnection)
    {
        DIO_WritePin(BuzzerGroup,BuzzerPin,DIO_Highfor1Pin);
    }
    else if(ConnectionType==Buzzer_SinkConnection)
    {
        DIO_WritePin(BuzzerGroup,BuzzerPin,DIO_Lowfor1Pin);
    }
}

void Buzzer_Off(uint8_t BuzzerGroup, uint8_t BuzzerPin ,uint8_t ConnectionType)
{
    if(ConnectionType==Buzzer_SourceConnection)
    {
        DIO_WritePin(BuzzerGroup,BuzzerPin,DIO_Lowfor1Pin);
    }
    else if(ConnectionType==Buzzer_SinkConnection)
    {
        DIO_WritePin(BuzzerGroup,BuzzerPin,DIO_Highfor1Pin);
    }
}

void Buzzer_Tone(uint8_t BuzzerGroup, uint8_t BuzzerPin )
{
    uint16_t ToneCounter=0;

    for(ToneCounter=0;ToneCounter<(Buzzer_ToneTime/2);ToneCounter++)
    {
        DIO_TogglePin(BuzzerGroup,BuzzerPin);
        _delay_ms(1);
        DIO_TogglePin(BuzzerGroup,BuzzerPin);
        _delay_ms(1);
    }
}

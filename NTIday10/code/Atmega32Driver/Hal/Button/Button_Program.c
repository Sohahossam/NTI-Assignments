#include "Button_Interface.h"

void Btn_Init (uint8_t ButtonGroup,uint8_t ButtonPin,uint8_t Connection)
{
    DIO_DirectionSelectforPin(ButtonGroup,ButtonPin,DIO_Inputfor1Pin);

    if(Connection==Btn_InternalPullup)
    {
        DIO_WritePin(ButtonGroup,ButtonPin,DIO_Highfor1Pin);
    }
    else
    {
        DIO_WritePin(ButtonGroup,ButtonPin,DIO_Lowfor1Pin);
    }
}

uint8_t Btn_ReadState(uint8_t ButtonGroup,uint8_t ButtonPin,uint8_t Connection)
{
    uint8_t ButtonState=0xFF;

    (void)Connection;
    DIO_ReadPin(ButtonGroup,ButtonPin,&ButtonState);
    return ButtonState;
}

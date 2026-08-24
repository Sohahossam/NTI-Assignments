#include "Segment_Interface.h"

void SSD_Init (uint8_t SSDGroup)
{
    DIO_DirectionSelectforGroup(SSDGroup,DIO_Outputfor1Group);
}

void SSD_DisplayNumber(uint8_t SSDGroup,uint8_t SSDType,uint8_t Number)
{
    static const uint8_t SSDNumbers[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

    if(Number<=9)
    {
        if(SSDType==SSD_Cathode)
        {
            DIO_WriteGroup(SSDGroup,SSDNumbers[Number]);
        }
        else if(SSDType==SSD_Anode)
        {
            DIO_WriteGroup(SSDGroup,(uint8_t)~SSDNumbers[Number]);
        }
    }
}

void SSD_Off (uint8_t SSDGroup,uint8_t SSDType)
{
    if(SSDType==SSD_Cathode)
    {
        DIO_WriteGroup(SSDGroup,DIO_Lowfor1Group);
    }
    else if(SSDType==SSD_Anode)
    {
        DIO_WriteGroup(SSDGroup,DIO_Highfor1Group);
    }
}

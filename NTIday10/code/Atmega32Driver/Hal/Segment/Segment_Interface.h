#ifndef _HAL_SEGMENT_SEGMENT_INTERFACE_H
#define _HAL_SEGMENT_SEGMENT_INTERFACE_H

#include <stdint.h>
#include "../../Mcal/DIO/DIO_Interface.h"

typedef enum
{
    SSD_Anode,
    SSD_Cathode,

}SSD_Type_t;

void SSD_Init (uint8_t SSDGroup);
void SSD_DisplayNumber(uint8_t SSDGroup,uint8_t SSDType,uint8_t Number);
void SSD_Off (uint8_t SSDGroup,uint8_t SSDType);

#endif

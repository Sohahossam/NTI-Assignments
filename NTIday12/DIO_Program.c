// DIO_Interface.h
#ifndef DIO_INTERFACE_H
#define DIO_INTERFACE_H
#include "../../Atmega32Register.h"

#define DIO_GroupA 0
#define DIO_GroupB 1
#define DIO_GroupC 2
#define DIO_GroupD 3

#define DIO_Pin0 0
#define DIO_Pin1 1
#define DIO_Pin2 2
#define DIO_Pin3 3
#define DIO_Pin4 4
#define DIO_Pin5 5
#define DIO_Pin6 6
#define DIO_Pin7 7

#define DIO_InputFor1Pin 0
#define DIO_OutputFor1Pin 1

void DIO_DirectionSelectorPin(uint8_t group, uint8_t pin, uint8_t state);

#endif

// DIO_Program.c
#include "DIO_Interface.h"
#include "../../Common/BitMath.h"

void DIO_DirectionSelectorPin(uint8_t group, uint8_t pin, uint8_t state)
{
    switch(group)
    {
        case DIO_GroupA: 
            if(state == DIO_OutputFor1Pin) SET_BIT(DDRA, pin); 
            else CLR_BIT(DDRA, pin); 
            break;
        case DIO_GroupB: 
            if(state == DIO_OutputFor1Pin) SET_BIT(DDRB, pin); 
            else CLR_BIT(DDRB, pin); 
            break;
        case DIO_GroupC: 
            if(state == DIO_OutputFor1Pin) SET_BIT(DDRC, pin); 
            else CLR_BIT(DDRC, pin); 
            break;
        case DIO_GroupD: 
            if(state == DIO_OutputFor1Pin) SET_BIT(DDRD, pin); 
            else CLR_BIT(DDRD, pin); 
            break;
    }
}
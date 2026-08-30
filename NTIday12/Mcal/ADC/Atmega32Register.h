#ifndef ATMEGA32_REGISTER_H
#define ATMEGA32_REGISTER_H

#include "Common/Definition.h"

// DIO Registers
#define DDRA  (*(volatile uint8_t*)0x3A)
#define PORTA (*(volatile uint8_t*)0x3B)
#define PINA  (*(volatile uint8_t*)0x39)

#define DDRB  (*(volatile uint8_t*)0x37)
#define PORTB (*(volatile uint8_t*)0x38)
#define PINB  (*(volatile uint8_t*)0x36)

#define DDRC  (*(volatile uint8_t*)0x34)
#define PORTC (*(volatile uint8_t*)0x35)
#define PINC  (*(volatile uint8_t*)0x33)

#define DDRD  (*(volatile uint8_t*)0x31)
#define PORTD (*(volatile uint8_t*)0x32)
#define PIND  (*(volatile uint8_t*)0x30)

// ADC Registers
#define ADMUX  (*(volatile uint8_t*)0x27)
#define ADCSRA (*(volatile uint8_t*)0x26)
#define ADCL   (*(volatile uint8_t*)0x24)
#define ADCH   (*(volatile uint8_t*)0x25)
#define SFIOR  (*(volatile uint8_t*)0x50)

// ADC Bits (Ensure they match ADC_Private.h)
#define Bit_ADLAR 7
#define Bit_ADATE 5
#define Bit_ADSC  6
#define Bit_ADEN  7
#define Bit_ADIE  3

#endif
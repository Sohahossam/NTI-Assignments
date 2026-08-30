// LCD_Interface.h
#ifndef LCD_INTERFACE_H
#define LCD_INTERFACE_H
#include "../../Common/Definition.h"

void LCD_Init(void);
void LCD_voidGoToRowCol(uint8_t row, uint8_t col);
void LCD_voidWriteNumber(uint16_t num);
void LCD_voidClear(void);

#endif

// LCD_Program.c
#include "LCD_Interface.h"
#include "../../Mcal/DIO/DIO_Interface.h"
#include "../../Common/BitMath.h"
#include <util/delay.h>

#define LCD_CTRL_PORT DIO_GroupB
#define LCD_DATA_PORT DIO_GroupA
#define RS_PIN DIO_Pin1
#define RW_PIN DIO_Pin2
#define E_PIN DIO_Pin3

void LCD_voidSendCommand(uint8_t cmd)
{
    DIO_DirectionSelectorPin(LCD_CTRL_PORT, RS_PIN, 0);
    DIO_DirectionSelectorPin(LCD_CTRL_PORT, RW_PIN, 0);
    DIO_DirectionSelectorPin(LCD_CTRL_PORT, E_PIN, 1);
    // Send data (very basic 8-bit mode simulation)
    // In a real project, you'd use full 8-bit ports here.
    // For simplicity, we assume PORTA is output.
    DDRA = 0xFF; 
    PORTA = cmd;
    SET_BIT(PORTB, E_PIN); 
    _delay_ms(2);
    CLR_BIT(PORTB, E_PIN);
    _delay_ms(2);
}

void LCD_voidSendData(uint8_t data)
{
    DIO_DirectionSelectorPin(LCD_CTRL_PORT, RS_PIN, 1);
    DIO_DirectionSelectorPin(LCD_CTRL_PORT, RW_PIN, 0);
    DIO_DirectionSelectorPin(LCD_CTRL_PORT, E_PIN, 1);
    DDRA = 0xFF;
    PORTA = data;
    SET_BIT(PORTB, E_PIN);
    _delay_ms(2);
    CLR_BIT(PORTB, E_PIN);
    _delay_ms(2);
}

void LCD_Init(void)
{
    _delay_ms(20);
    LCD_voidSendCommand(0x38); // 8-bit mode, 2 lines
    LCD_voidSendCommand(0x0C); // Display ON, Cursor OFF
    LCD_voidSendCommand(0x01); // Clear
}

void LCD_voidGoToRowCol(uint8_t row, uint8_t col)
{
    uint8_t address = (row == 0) ? 0x80 : 0xC0;
    LCD_voidSendCommand(address + col);
}

void LCD_voidWriteNumber(uint16_t num)
{
    char str[6];
    // Simple manual conversion for 16-bit integer
    int i = 0;
    if(num == 0) { LCD_voidSendData('0'); return; }
    while(num > 0) {
        str[i++] = (num % 10) + '0';
        num /= 10;
    }
    while(i > 0) {
        LCD_voidSendData(str[--i]);
    }
}

void LCD_voidClear(void)
{
    LCD_voidSendCommand(0x01);
}
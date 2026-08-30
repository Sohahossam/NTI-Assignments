#include <stdint.h>

void LCD_WriteNumber(int32_t Number)
{
    uint8_t NumberDigits[10];
    uint8_t Index = 0;

    if (Number == 0)
    {
        LCD_WriteCharacter('0');
        return;
    }

    if (Number < 0)
    {
        LCD_WriteCharacter('-');
        Number = -Number;
    }

    while (Number != 0)
    {
        NumberDigits[Index] = (Number % 10) + '0';
        Number /= 10;
        Index++;
    }

    while (Index != 0)
    {
        Index--;
        LCD_WriteCharacter(NumberDigits[Index]);
    }
}
# include "Atmega32Register.h"
# include "BitMath.h"
# include <stdint.h>
/*
Build Setup : Folder path main.c in , Output Name : As you like [Team1] , AtMega32 ,C ,GNU99 ,fq 8 MHz {Save Config}  then Build
Simulation : 
Atmega32 , Fixed Voltage (on button) -> reset , double click on Atmega32 (FirmWare : team1.hex "Path") , enable Reload hex simulation at start ,
right click on open MCU Monitor Put Name what you want to check the values then simulation start 
*/
int main(void)
{
    // TEAM 1 
    DDRA_Reg = 0xAB;
    SetBit(PORTA_Reg, 0); // Yasseen
    SetBit(PORTA_Reg, 1); // Khaled
    SetBit(PORTA_Reg, 3); // Soha
    SetBit(PORTA_Reg, 5); // Roaya
    SetBit(PORTA_Reg, 7); // Maryam


    return 0;
}
#include "Mcal/DIO/DIO_Interface.h"
#include "Hal/Led/Led_Interface.h"
#include "Hal/Button/Button_Interface.h"
#define Pressed      0
#define NotPressed   1
int main(void)
{
// Internal Pull Up Button to control on Led 
       Btn_Init(DIO_GroupA,DIO_Pin0,Btn_InternalPullup);
       // Led 
     Led_Init(DIO_GroupD,DIO_Pin0);
     uint8_t ButtonState=NotPressed;
     while(1)
     {
        ButtonState=Btn_ReadState(DIO_GroupA,DIO_Pin0,Btn_InternalPullup);
        if(ButtonState==Pressed)
        {
            // DIO_WritePin(DIO_GroupD,DIO_Pin0,DIO_Highfor1Pin);
            Led_On(DIO_GroupD,DIO_Pin0,Led_SourceConnection);
        }
        else
        {
            Led_Off(DIO_GroupD,DIO_Pin0,Led_SourceConnection);

        }
     }
}

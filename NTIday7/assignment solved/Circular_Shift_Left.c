#include <stdint.h>


uint8_t Circular_Shift_Left(uint8_t num, uint8_t shift)
{
    /* Modulo 8 ensures shifts larger than the data size wrap correctly */
    uint8_t actual_shift = shift % 8U;
    
    return (uint8_t)((num << actual_shift) | (num >> (8U - actual_shift)));
}
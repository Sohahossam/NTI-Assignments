#include <stdint.h>
#include <stddef.h>


void Set_Bit(uint32_t *var, uint8_t bit_pos)
{
    if ((var != NULL) && (bit_pos < 32U))
    {
        *var |= (1UL << bit_pos);
    }
}


void Clear_Bit(uint32_t *var, uint8_t bit_pos)
{
    if ((var != NULL) && (bit_pos < 32U))
    {
        *var &= ~(1UL << bit_pos);
    }
}


void Toggle_Bit_8(uint8_t *var, uint8_t bit_pos)
{
    if ((var != NULL) && (bit_pos < 8U))
    {
        *var ^= (1U << bit_pos);
    }
}
#include <stdint.h>
#include <stddef.h>

void Count_Zeros_Ones(uint32_t num, uint8_t *zeros, uint8_t *ones)
{
    if ((zeros != NULL) && (ones != NULL))
    {
        *zeros = 0U;
        *ones = 0U;
        uint8_t i;

        for (i = 0U; i < 32U; ++i)
        {
            if ((num & (1UL << i)) != 0U)
            {
                (*ones)++;
            }
            else
            {
                (*zeros)++;
            }
        }
    }
}
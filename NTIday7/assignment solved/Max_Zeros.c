#include <stdint.h>
#include <stdbool.h>


uint8_t Max_Zeros_Between_Ones(uint32_t num)
{
    uint8_t max_zeros = 0U;
    uint8_t current_zeros = 0U;
    bool seen_one = false;
    uint8_t i;

    for (i = 0U; i < 32U; ++i)
    {
        if ((num & (1UL << i)) != 0U) 
        {
            if (seen_one == true)
            {
                if (current_zeros > max_zeros)
                {
                    max_zeros = current_zeros;
                }
            }
            seen_one = true;
            current_zeros = 0U; 
        }
        else 
        {
            if (seen_one == true)
            {
                current_zeros++;
            }
        }
    }
    
    return max_zeros;
}
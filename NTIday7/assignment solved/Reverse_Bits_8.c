
 #include <stdint.h>

uint8_t Reverse_Bits_8(uint8_t num)
{
    uint8_t reversed = 0U;
    uint8_t i;
    
    for (i = 0U; i < 8U; ++i)
    {
        
        if ((num & (1U << i)) != 0U)
        {
            
            reversed |= (1U << (7U - i));
        }
    }
    return reversed;
}

#include <stdint.h>

uint32_t Sum_Of_Digits(uint32_t num)
{
    uint32_t sum = 0U;
    uint32_t temp = num;

    while (temp > 0U)
    {
        sum += (temp % 10U);
        temp /= 10U;
    }

    return sum;
}

#include <stdint.h>

uint32_t Find_Duplicate_101(const uint32_t *arr)
{
    uint32_t duplicate = 0U;
    if (arr != NULL)
    {
        uint32_t expected_sum = 5050U; /* Sum of 1 to 100 = n(n+1)/2 */
        uint32_t actual_sum = 0U;
        uint8_t i;
        
        for (i = 0U; i < 101U; ++i)
        {
            actual_sum += arr[i];
        }
        
        duplicate = actual_sum - expected_sum;
    }
    return duplicate;
}
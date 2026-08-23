#include <stdint.h>
#include <stddef.h>


void Swap_Arrays(uint32_t *arr1, uint32_t *arr2, uint16_t size)
{
    if ((arr1 != NULL) && (arr2 != NULL) && (size > 0U))
    {
        uint16_t i;
        for (i = 0U; i < size; ++i)
        {
            uint32_t temp = arr1[i];
            arr1[i] = arr2[i];
            arr2[i] = temp;
        }
    }
}
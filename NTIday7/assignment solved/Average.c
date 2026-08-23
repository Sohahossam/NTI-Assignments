#include <stdint.h>
#include <stddef.h>

uint32_t Get_Array_Average(const uint32_t *arr, uint16_t size)
{
    uint32_t average = 0U;

    if ((arr != NULL) && (size > 0U))
    {
        uint64_t sum = 0U;
        uint16_t i;

        for (i = 0U; i < size; ++i)
        {
            sum += arr[i];
        }

        average = (uint32_t)(sum / size);
    }

    return average;
}
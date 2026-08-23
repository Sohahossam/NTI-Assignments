#include <stdint.h>
#include <stddef.h>

void Reverse_Array(uint32_t *arr, uint16_t size)
{
    if ((arr != NULL) && (size > 0U))
    {
        uint16_t start = 0U;
        uint16_t end = size - 1U;

        while (start < end)
        {
            uint32_t temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start++;
            end--;
        }
    }
}

#include <stdbool.h>
#include <stdint.h>

void Bubble_Sort(uint32_t *arr, uint16_t size)
{
    if ((arr != NULL) && (size > 1U))
    {
        uint16_t i;
        uint16_t j;
        bool swapped;

        for (i = 0U; i < (size - 1U); ++i)
        {
            swapped = false;
            for (j = 0U; j < (size - i - 1U); ++j)
            {
                if (arr[j] > arr[j + 1U])
                {
                    
                    uint32_t temp = arr[j];
                    arr[j] = arr[j + 1U];
                    arr[j + 1U] = temp;
                    swapped = true;
                }
            }
            
            if (swapped == false)
            {
                break; 
            }
        }
    }
}

#include <stdint.h>
#include <stddef.h>

uint32_t Get_Most_Repeated(const uint32_t *arr, uint16_t size)
{
    uint32_t most_repeated = 0U;
    
    if ((arr != NULL) && (size > 0U))
    {
        uint16_t i;
        uint16_t j;
        uint16_t max_count = 0U;
        
        for (i = 0U; i < size; ++i)
        {
            uint16_t current_count = 0U;
            for (j = 0U; j < size; ++j)
            {
                if (arr[j] == arr[i])
                {
                    current_count++;
                }
            }
            
            if (current_count > max_count)
            {
                max_count = current_count;
                most_repeated = arr[i];
            }
        }
    }
    return most_repeated;
}
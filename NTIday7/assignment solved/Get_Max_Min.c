#include <stdint.h>
#include <stddef.h>


void Get_Max_Min(const uint32_t *arr, uint16_t size, uint32_t *max_val, uint16_t *max_idx, uint32_t *min_val, uint16_t *min_idx)
{
    if ((arr != NULL) && (size > 0U) && (max_val != NULL) && (max_idx != NULL) && (min_val != NULL) && (min_idx != NULL))
    {
        uint16_t i;
        
       
        *max_val = arr[0];
        *max_idx = 0U;
        *min_val = arr[0];
        *min_idx = 0U;

        for (i = 1U; i < size; ++i)
        {
            if (arr[i] > *max_val)
            {
                *max_val = arr[i];
                *max_idx = i;
            }
            if (arr[i] < *min_val)
            {
                *min_val = arr[i];
                *min_idx = i;
            }
        }
    }
}
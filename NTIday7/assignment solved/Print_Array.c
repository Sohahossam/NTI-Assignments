#include <stdio.h> 
#include <stdint.h>


void Print_Array(const uint32_t *arr, uint16_t size)
{
    if ((arr != NULL) && (size > 0U))
    {
        uint16_t i;
        for (i = 0U; i < size; ++i)
        {
            /* Dereference the pointer at the offset (arr + i) */
            printf("%u ", *(arr + i));
        }
        printf("\n");
    }
}
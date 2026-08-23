#include <stdint.h>
#include <stddef.h>


void Swap_Pointers(uint32_t **ptr1, uint32_t **ptr2)
{
    if ((ptr1 != NULL) && (ptr2 != NULL))
    {
        uint32_t *temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}
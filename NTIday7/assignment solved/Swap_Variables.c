#include <stdint.h>
#include <stddef.h>


void Swap_Variables(uint32_t *var1, uint32_t *var2)
{
    if ((var1 != NULL) && (var2 != NULL))
    {
        uint32_t temp = *var1;
        *var1 = *var2;
        *var2 = temp;
    }
}
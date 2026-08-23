
#include <stdint.h>

uint32_t Count_Calls(void)
{
    static uint32_t call_count = 0U; 
    
    call_count++;
    
    return call_count;
}
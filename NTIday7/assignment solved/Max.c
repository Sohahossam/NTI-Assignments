
#include <stdint.h>
#include <stdbool.h>

uint32_t Get_Historical_Max(uint32_t current_input)
{
    static uint32_t max_seen = 0U;
    static bool is_first_call = true;
    
    if (is_first_call == true)
    {
        max_seen = current_input;
        is_first_call = false;
    }
    else if (current_input > max_seen)
    {
        max_seen = current_input;
    }
    
    return max_seen;
}
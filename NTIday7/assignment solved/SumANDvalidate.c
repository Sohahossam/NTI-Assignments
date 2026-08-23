
#include <stddef.h>

typedef unsigned char uint8_t;
typedef unsigned short uint16_t;
typedef enum
{
    false = 0,
    true = 1
} bool;

uint16_t Calculate_Frame_Sum(const uint8_t *frame)
{
    uint16_t sum = 0U;
    
    if (frame != NULL)
    {
        uint8_t i;
        for (i = 0U; i < 8U; ++i)
        {
            sum += frame[i];
        }
    }
    return sum;
}


bool Validate_Received_Frame(const uint8_t *frame, uint16_t received_sum)
{
    bool is_valid = false;
    
    if (frame != NULL)
    {
        uint16_t calculated_sum = Calculate_Frame_Sum(frame);
        
        if (calculated_sum == received_sum)
        {
            is_valid = true;
        }
    }
    
    return is_valid;
}
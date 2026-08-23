 #include <stdbool.h>
 #include <stdint.h>
 #include <stddef.h>


uint16_t Copy_Unique_Chars(const char *src, char *dest, uint16_t size)
{
    uint16_t dest_idx = 0U;
    
    if ((src != NULL) && (dest != NULL) && (size > 0U))
    {
        bool seen[256] = { false };
        uint16_t i;

        for (i = 0U; i < size; ++i)
        {
            uint8_t char_val = (uint8_t)src[i];
            
            if (seen[char_val] == false)
            {
                dest[dest_idx] = src[i];
                seen[char_val] = true;
                dest_idx++;
            }
        }
    }
    return dest_idx;
}
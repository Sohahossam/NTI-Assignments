#include <stddef.h>
#include <stdint.h>


void Reverse_String_Iterative(char *str)
{
    if (str != NULL)
    {
        uint32_t len = 0U;
        uint32_t start = 0U;
        uint32_t end;

        while (str[len] != '\0')
        {
            len++;
        }

        if (len > 0U)
        {
            end = len - 1U;
            while (start < end)
            {
                char temp = str[start];
                str[start] = str[end];
                str[end] = temp;
                start++;
                end--;
            }
        }
    }
}


void Reverse_String_Recursive(char *str, uint32_t start, uint32_t end)
{
    if ((str != NULL) && (start < end))
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        
        Reverse_String_Recursive(str, start + 1U, end - 1U);
    }
}
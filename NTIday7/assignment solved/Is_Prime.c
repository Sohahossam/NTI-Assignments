#include <stdint.h>
#include <stdbool.h>


bool Is_Prime(uint32_t num)
{
    bool is_prime = true;

    if (num <= 1U)
    {
        is_prime = false;
    }
    else if (num == 2U)
    {
        is_prime = true;
    }
    else if ((num % 2U) == 0U)
    {
        is_prime = false; /* Even numbers > 2 are not prime */
    }
    else
    {
        uint32_t i;
        /* Check odd numbers up to the square root of num */
        for (i = 3U; (i * i) <= num; i += 2U)
        {
            if ((num % i) == 0U)
            {
                is_prime = false;
                break;
            }
        }
    }

    return is_prime;
}
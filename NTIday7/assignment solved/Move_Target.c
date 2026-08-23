#include <stdint.h>
#include <stddef.h>


void Move_Target_To_End(uint32_t *arr, uint16_t size, uint32_t target)
{
    if ((arr != NULL) && (size > 0U))
    {
        uint16_t read_idx;
        uint16_t write_idx = 0U;

        for (read_idx = 0U; read_idx < size; ++read_idx)
        {
            if (arr[read_idx] != target)
            {
                arr[write_idx] = arr[read_idx];
                write_idx++;
            }
        }

        while (write_idx < size)
        {
            arr[write_idx] = target;
            write_idx++;
        }
    }
}
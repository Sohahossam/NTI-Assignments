#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>


int32_t Binary_Search_Iterative(const uint32_t *arr, uint16_t size, uint32_t target)
{
    int32_t result = -1;
    
    if ((arr != NULL) && (size > 0U))
    {
        uint16_t left = 0U;
        uint16_t right = size - 1U;
        uint16_t mid;

        while (left <= right)
        {
            mid = left + ((right - left) / 2U); /* Prevents overflow */

            if (arr[mid] == target)
            {
                result = (int32_t)mid;
                break;
            }
            else if (arr[mid] < target)
            {
                left = mid + 1U;
            }
            else
            {
                /* Check prevents underflow of unsigned integer */
                if (mid == 0U) { break; }
                right = mid - 1U;
            }
        }
    }
    return result;
}

/**
 * @brief Searches for a target using recursive binary search (Violates MISRA-C).
 * 
 * @param[in] arr Pointer to the sorted array.
 * @param[in] left The left boundary index.
 * @param[in] right The right boundary index.
 * @param[in] target The value to search for.
 * @return The index of the target if found, otherwise -1.
 */
int32_t Binary_Search_Recursive(const uint32_t *arr, uint16_t left, uint16_t right, uint32_t target)
{
    int32_t result = -1;
    
    if ((arr != NULL) && (left <= right))
    {
        uint16_t mid = left + ((right - left) / 2U);

        if (arr[mid] == target)
        {
            result = (int32_t)mid;
        }
        else if (arr[mid] < target)
        {
            result = Binary_Search_Recursive(arr, mid + 1U, right, target);
        }
        else
        {
            if (mid > 0U)
            {
                result = Binary_Search_Recursive(arr, left, mid - 1U, target);
            }
        }
    }
    return result;
}
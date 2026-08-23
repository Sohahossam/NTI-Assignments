 #include <stdint.h>

/**
 * @brief Adds two 8-bit unsigned integers safely.
 * 
 * @param[in] a First number.
 * @param[in] b Second number.
 * @return The sum, saturated at 255 to prevent overflow wrap-around.
 */
uint8_t Add_Unsigned_Chars_Safe(uint8_t a, uint8_t b)
{
    
    uint16_t result = (uint16_t)a + (uint16_t)b;
    
    if (result > 255U)
    {
        
        return 255U; 
    }
    
    return (uint8_t)result;
}
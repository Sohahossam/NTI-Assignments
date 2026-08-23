 #include <stdbool.h>
 #include <stdint.h>

/**
 * @brief Checks the endianness of the host system.
 * 
 * @return true if Little Endian, false if Big Endian.
 */
bool Is_Little_Endian(void)
{
    /* 
     * 16-bit value: 
     * MSB = 0x00
     * LSB = 0x01
     */
    uint16_t data = 0x0001U;
    
    /* Point to the lowest memory address of 'data' */
    uint8_t *byte_ptr = (uint8_t *)&data;
    
    /* If the lowest address holds the LSB, it is Little Endian */
    return (*byte_ptr == 0x01U);
}
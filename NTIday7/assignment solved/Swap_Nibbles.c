
typedef unsigned char uint8_t;

uint8_t Swap_Nibbles(uint8_t num)
{
    
    return (uint8_t)(((num & 0x0FU) << 4U) | ((num & 0xF0U) >> 4U));
}
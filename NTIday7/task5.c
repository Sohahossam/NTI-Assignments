#include <stdio.h>

int toggle_bit(int value, int bit)
{
    if (bit < 0 || bit > 7) {
        return value; 
    }
    return value ^ (1 << bit);
}

int main(void)
{
    int value = 5;  
    int bit = 1;

    value = toggle_bit(value, bit);

    printf("Value = %d\n", value); 

    return 0;
}
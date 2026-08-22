#include <stdio.h>

int main() {
    int num;
    int msb;
    int bits;

    printf("Enter any number: ");
    scanf("%d", &num);

    bits = sizeof(int) * 8;
    msb = 1 << (bits - 1);

    if (num & msb) {
        printf("MSB of %d is set (1).\n", num);
    } else {
        printf("MSB of %d is unset (0).\n", num);
    }

    return 0;
}
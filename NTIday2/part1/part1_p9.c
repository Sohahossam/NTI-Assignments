#include <stdio.h>

int main() {
    int num;
    int count;
    int msb;
    int bits = sizeof(int) * 8;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        count = 0;
        msb = 1 << (bits - 1);

        for (int i = 0; i < bits; i++) {
            if ((num << i) & msb) {
                break;
            }
            count++;
        }

        printf("Total number of leading zeros in %d is %d\n\n", num, count);
    }

    return 0;
}
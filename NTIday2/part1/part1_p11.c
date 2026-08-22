#include <stdio.h>

int main() {
    int num;
    int zeros;
    int ones;
    int bits = sizeof(int) * 8;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        zeros = 0;
        ones = 0;

        for (int i = 0; i < bits; i++) {
            if ((num >> i) & 1) {
                ones++;
            } else {
                zeros++;
            }
        }

        printf("Total zero bit is %d\n", zeros);
        printf("Total one bit is %d\n\n", ones);
    }

    return 0;
}
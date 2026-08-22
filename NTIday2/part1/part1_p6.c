#include <stdio.h>

int main() {
    int num;
    int order = -1;
    int bits = sizeof(int) * 8;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        order = -1;

        for (int i = 0; i < bits; i++) {
            if ((num >> i) & 1) {
                order = i;
            }
        }

        if (order != -1) {
            printf("Highest order set bit in %d is %d\n\n", num, order);
        } else {
            printf("0 has no set bits.\n\n");
        }
    }

    return 0;
}
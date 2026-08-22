#include <stdio.h>

int main() {
    int num;
    int count;
    int bits = sizeof(int) * 8;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        count = 0;

        for (int i = 0; i < bits; i++) {
            if ((num >> i) & 1) {
                break;
            }
            count++;
        }

        printf("Lowest order set bit in %d is %d\n\n", num, count);
    }

    return 0;
}
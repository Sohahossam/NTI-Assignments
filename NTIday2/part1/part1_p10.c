#include <stdio.h>

int main() {
    int num;
    int flippedNumber;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        flippedNumber = ~num;

        printf("Original number = %d (in decimal)\n", num);
        printf("Number after bits are flipped = %d (in decimal)\n\n", flippedNumber);
    }

    return 0;
}
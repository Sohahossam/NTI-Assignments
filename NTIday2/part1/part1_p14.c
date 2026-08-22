#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        if (num & 1) {
            printf("%d is odd.\n\n", num);
        } else {
            printf("%d is even.\n\n", num);
        }
    }

    return 0;
}
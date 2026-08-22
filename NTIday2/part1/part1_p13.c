#include <stdio.h>

int main() {
    int num1, num2;

    while (1) {
        printf("Enter any two numbers: ");
        if (scanf("%d %d", &num1, &num2) != 2) {
            break;
        }

        printf("Original value of num1 = %d\n", num1);
        printf("Original value of num2 = %d\n", num2);

        num1 = num1 ^ num2;
        num2 = num1 ^ num2;
        num1 = num1 ^ num2;

        printf("Num1 after swapping = %d\n", num1);
        printf("Num2 after swapping = %d\n\n", num2);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int num;
    int bits = sizeof(int) * 8;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        printf("Converted binary: ");
        for (int i = bits - 1; i >= 0; i--) {
            printf("%d", (num >> i) & 1);
        }
        printf("\n\n");
    }

    return 0;
}
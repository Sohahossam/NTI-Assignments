#include <stdio.h>

int main() {
    int num;

    while (1) {
        printf("Input the number (Table to be calculated) : ");
        fflush(stdout);

        if (scanf("%d", &num) != 1) {
            break;
        }

        printf("\n");
        for (int i = 1; i <= 10; i++) {
            printf("%d X %d = %d\n", num, i, num * i);
        }
        printf("\n");
    }

    return 0;
}
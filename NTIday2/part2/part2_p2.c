#include <stdio.h>
#include <ctype.h>
int main() {
    int arr[5];

    while (1) {
        printf("enter the five number:\n");
        for (int i = 0; i < 5; i++) {
            if (scanf("%d", &arr[i]) != 1) {
                return 0;
            }
        }

        printf("\nthe numbers that is divisable by 3 is :\n");
        for (int i = 0; i < 5; i++) {
            if (arr[i] % 3 == 0) {
                printf("%d\n", arr[i]);
            }
        }
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    int num;
    int n;
    int bit_status;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        printf("Enter nth bit to check (0-31): ");
        if (scanf("%d", &n) != 1) {
            break;
        }

        bit_status = (num >> n) & 1;

        printf("The %d bit is set to %d\n", n, bit_status);
    }

    return 0;
}
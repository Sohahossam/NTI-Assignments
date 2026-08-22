#include <stdio.h>

int main() {
    int num;
    int n;
    int newNum;

    while (1) {
        printf("Enter any number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        printf("Enter nth bit to clear (0-31): ");
        if (scanf("%d", &n) != 1) {
            break;
        }

        newNum = num & (~(1 << n));

        printf("Bit cleared successfully.\n\n");
        printf("Number before clearing %d bit: %d (in decimal)\n", n, num);
        printf("Number after clearing %d bit: %d (in decimal)\n\n", n, newNum);
    }

    return 0;
}
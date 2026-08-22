#include <stdio.h>

int main() {
    int amount;
    int notes[] = {500, 100, 50, 20, 10, 5, 2, 1};
    int count;

    while (1) {
        printf("Enter amount: ");
        fflush(stdout);

        if (scanf("%d", &amount) != 1) {
            break;
        }

        printf("Total number of notes =\n");

        for (int i = 0; i < 8; i++) {
            count = amount / notes[i];
            amount %= notes[i];
            printf("%d = %d\n", notes[i], count);
        }

        printf("\n");
    }

    return 0;
}
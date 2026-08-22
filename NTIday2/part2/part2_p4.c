#include <stdio.h>

int main() {
    int cp, sp, amount;

    while (1) {
        printf("Enter cost price: ");
        fflush(stdout);
        if (scanf("%d", &cp) != 1) {
            break;
        }

        printf("Enter selling price: ");
        fflush(stdout);
        if (scanf("%d", &sp) != 1) {
            break;
        }

        if (sp > cp) {
            amount = sp - cp;
            printf("Profit = %d\n\n", amount);
        } else if (cp > sp) {
            amount = cp - sp;
            printf("Loss = %d\n\n", amount);
        } else {
            printf("No Profit No Loss.\n\n");
        }
    }

    return 0;
}
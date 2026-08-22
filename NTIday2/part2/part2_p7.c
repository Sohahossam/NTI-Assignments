#include <stdio.h>

int main() {
    float units, amount, total_amount, surcharge;

    while (1) {
        printf("Enter total units consumed: ");
        fflush(stdout);

        if (scanf("%f", &units) != 1) {
            break;
        }

        if (units <= 50) {
            amount = units * 0.50f;
        } else if (units <= 150) {
            amount = (50 * 0.50f) + ((units - 50) * 0.75f);
        } else if (units <= 250) {
            amount = (50 * 0.50f) + (100 * 0.75f) + ((units - 150) * 1.20f);
        } else {
            amount = (50 * 0.50f) + (100 * 0.75f) + (100 * 1.20f) + ((units - 250) * 1.50f);
        }

        surcharge = amount * 0.20f;
        total_amount = amount + surcharge;

        printf("Electricity Bill = Rs. %.2f\n\n", total_amount);
    }

    return 0;
}
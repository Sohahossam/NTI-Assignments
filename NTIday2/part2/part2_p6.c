#include <stdio.h>

int main() {
    float basic, gross, hra, da;

    while (1) {
        printf("Enter basic salary of an employee: ");
        fflush(stdout);

        if (scanf("%f", &basic) != 1) {
            break;
        }

        if (basic <= 10000) {
            hra = basic * 0.20f;
            da = basic * 0.80f;
        } else if (basic <= 20000) {
            hra = basic * 0.25f;
            da = basic * 0.90f;
        } else {
            hra = basic * 0.30f;
            da = basic * 0.95f;
        }

        gross = basic + hra + da;

        printf("GROSS SALARY OF EMPLOYEE = %.2f\n\n", gross);
    }

    return 0;
}
#include <stdio.h>

int main() {
    int cust_no;
    float units, charges;

    while (1) {
        printf("Enter CUSTOMER NO. and UNITS consumed\n");
        fflush(stdout);

        if (scanf("%d %f", &cust_no, &units) != 2) {
            break;
        }

        if (units <= 200) {
            charges = units * 0.50;
        } else if (units <= 400) {
            charges = 100 + (units - 200) * 0.65;
        } else if (units <= 600) {
            charges = 230 + (units - 400) * 0.80;
        } else {
            charges = 390 + (units - 600) * 1.00;
        }

        printf("\nCustomer No: %d:\n", cust_no);
        printf(" Charges = %.2f\n\n", charges);
    }

    return 0;
}
#include <stdio.h>

int main() {
    char op;
    double first, second;

    while (1) {
        printf("Enter an operator (+, -, *,/): ");
        fflush(stdout);

        if (scanf(" %c", &op) != 1) {
            break;
        }

        printf("Enter two operands: ");
        fflush(stdout);

        if (scanf("%lf %lf", &first, &second) != 2) {
            break;
        }

        switch (op) {
            case '+':
                printf("%.1lf + %.1lf = %.1lf\n\n", first, second, first + second);
                break;
            case '-':
                printf("%.1lf - %.1lf = %.1lf\n\n", first, second, first - second);
                break;
            case '*':
                printf("%.1lf * %.1lf = %.1lf\n\n", first, second, first * second);
                break;
            case '/':
                if (second != 0) {
                    printf("%.1lf / %.1lf = %.1lf\n\n", first, second, first / second);
                } else {
                    printf("Error! Division by zero.\n\n");
                }
                break;
            default:
                printf("Error! Operator is not correct.\n\n");
        }
    }

    return 0;
}
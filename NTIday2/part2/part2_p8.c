#include <stdio.h>

int main() {
    int month;

    while (1) {
        printf("Enter month number (1-12): ");
        fflush(stdout);

        if (scanf("%d", &month) != 1) {
            break;
        }

        switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
                printf("31 days\n\n");
                break;
            case 4:
            case 6:
            case 9:
            case 11:
                printf("30 days\n\n");
                break;
            case 2:
                printf("28 or 29 days\n\n");
                break;
            default:
                printf("Invalid input! Please enter a month number between 1 and 12.\n\n");
        }
    }

    return 0;
}
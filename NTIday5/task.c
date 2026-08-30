#include <stdio.h>

typedef struct
{
    char *name;
    float salary;
    float bonus;
    float deductions;
} Employee;

int main(void)
{
    Employee employees[3] = {
        {"Ahmed", 0, 0, 0},
        {"Waleed", 0, 0, 0},
        {"Amr", 0, 0, 0}
    };

    float financeTotal = 0;

    for (int count = 0; count < 3; count++)
    {
        printf("Enter %s's salary: ", employees[count].name);
        scanf("%f", &employees[count].salary);

        printf("Enter %s's bonus: ", employees[count].name);
        scanf("%f", &employees[count].bonus);

        printf("Enter %s's deductions: ", employees[count].name);
        scanf("%f", &employees[count].deductions);

        financeTotal += employees[count].salary
                      + employees[count].bonus
                      - employees[count].deductions;
    }

    printf("\nTotal amount supplied by the finance team = %.2f\n",
           financeTotal);

    return 0;
}
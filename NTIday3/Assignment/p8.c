#include <stdio.h>

int main(void) 
{
    unsigned char count = 0;
    int age;
    unsigned char baby = 0;
    unsigned char school = 0;
    unsigned char adult = 0;

    printf("Enter 15 an age\n: ");

    while (count < 15) 
    {
        scanf("%d", &age);

        if (age >= 0 && age <= 5) 
        {
            baby++;
        } 
        else if (age >= 6 && age <= 17) 
        {
            school++;
        } 
        else if (age >= 18) 
        {
            adult++;
        }

        count++;
    }

    printf("\n numbers of Still a baby:%d\n", baby);
    printf(" numbers of Attending school :%d\n", school);
    printf(" numbers of dult life :%d\n", adult);

    return 0;
}
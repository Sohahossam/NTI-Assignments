#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct
{
    char id;
    char math;
    char language;
    char physics;
    char chemistry;
} Student;

int main(void)
{
    Student students[10];
    char id;
    char found;
    char choice;

    srand((unsigned)time(NULL));

    for (char i = 0; i < 10; i++)
    {
        students[i].id = i + 1;
        students[i].math = rand() % 101;
        students[i].language = rand() % 101;
        students[i].physics = rand() % 101;
        students[i].chemistry = rand() % 101;
    }

    do
    {
        found = 0;

        printf("\nEnter student ID: ");
        scanf("%hhd", &id);

        for (char i = 0; i < 10; i++)
        {
            if (students[i].id == id)
            {
                printf("\nStudent ID: %hhd\n", students[i].id);
                printf("Math: %hhd\n", students[i].math);
                printf("Language: %hhd\n", students[i].language);
                printf("Physics: %hhd\n", students[i].physics);
                printf("Chemistry: %hhd\n", students[i].chemistry);

                found = 1;
                break;
            }
        }

        if (found == 0)
        {
            printf("Wrong ID! Student not found.\n");
        }

        printf("\nEnter e to exit otherwise to continue: ");
        scanf(" %c", &choice);

    } while (choice != 'e');

    return 0;
}
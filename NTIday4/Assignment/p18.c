#include <stdio.h>

int main(void) 
{
    char userExitChoice;
    do 
    {
        int inputArray[10];
        int rotationCount;

        printf("Enter 10 elements array: ");
        for (int currentIndex = 0; currentIndex < 10; currentIndex++) 
        {
            scanf("%d", &inputArray[currentIndex]);
        }

        printf("Enter number of times to right rotate: ");
        scanf("%d", &rotationCount);

        printf("Array before rotation:");
        for (int currentIndex = 0; currentIndex < 10; currentIndex++) 
        {
            printf("%d ", inputArray[currentIndex]);
        }
        printf("\n\n");

        rotationCount = rotationCount % 10;

        int temporaryArray[10];
        for (int currentIndex = 0; currentIndex < rotationCount; currentIndex++) 
        {
            temporaryArray[currentIndex] = inputArray[10 - rotationCount + currentIndex];
        }

        for (int currentIndex = 10 - 1; currentIndex >= rotationCount; currentIndex--) 
        {
            inputArray[currentIndex] = inputArray[currentIndex - rotationCount];
        }

        for (int currentIndex = 0; currentIndex < rotationCount; currentIndex++) 
        {
            inputArray[currentIndex] = temporaryArray[currentIndex];
        }

        printf("Array after rotation\n");
        for (int currentIndex = 0; currentIndex < 10; currentIndex++) 
        {
            printf("%d ", inputArray[currentIndex]);
        }
        printf("\n\n");

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userExitChoice);

    } while (userExitChoice != 'x' && userExitChoice != 'X');

    return 0;
}
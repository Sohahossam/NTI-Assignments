#include <stdio.h>

int main(void) 
{
    char userExitChoice;
    do 
    {
        char firstString[150];
        char secondString[150];

        printf("Enter first string: ");
        scanf("%s", firstString);

        printf("Enter second string: ");
        scanf("%s", secondString);

        int firstStringLength = 0;
        while (firstString[firstStringLength] != '\0') 
        {
            firstStringLength++;
        }

        int secondStringIndex = 0;
        while (secondString[secondStringIndex] != '\0') 
        {
            firstString[firstStringLength] = secondString[secondStringIndex];
            firstStringLength++;
            secondStringIndex++;
        }

        firstString[firstStringLength] = '\0';

        printf("After concatenation: %s\n", firstString);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userExitChoice);

    } while (userExitChoice != 'x' && userExitChoice != 'X');

    return 0;
}
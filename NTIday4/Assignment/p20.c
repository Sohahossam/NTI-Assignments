#include <stdio.h>

int main(void) 
{
    char userExitChoice;
    do 
    {
        char inputString[150];
        int stringLength = 0;

        printf("Enter a string: ");
        scanf(" %[^\n]", inputString);

        while (inputString[stringLength] != '\0') 
        {
            stringLength++;
        }

        printf("Length of string: %d\n", stringLength);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userExitChoice);

    } while (userExitChoice != 'x' && userExitChoice != 'X');

    return 0;
}
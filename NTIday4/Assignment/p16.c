#include <stdio.h>

int main(void) 
{
    char userChoice;
    do 
    {
        char inputString[100];
        char targetCharacter;
        int frequencyCount = 0;

        printf("Enter a string: ");
        scanf("%s", inputString);

        printf("Enter a character to find the frequency: ");
        scanf(" %c", &targetCharacter);

        for (int index = 0; inputString[index] != '\0'; ++index) 
        {
            if (targetCharacter == inputString[index]) 
            {
                ++frequencyCount;
            }
        }

        printf("Frequency of %c = %d\n", targetCharacter, frequencyCount);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userChoice);

    } while (userChoice != 'x' && userChoice != 'X');

    return 0;
}
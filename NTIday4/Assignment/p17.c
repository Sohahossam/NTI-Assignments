#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    char userChoice;
    do 
    {
        char inputLine[150];
        int vowelCount = 0;
        int consonantCount = 0;
        int digitCount = 0;
        int spaceCount = 0;

        printf("Enter a line of string: ");
        scanf(" %[^\n]", inputLine);

        for (int index = 0; inputLine[index] != '\0'; ++index) 
        {
            char currentCharacter = tolower(inputLine[index]);

            if (currentCharacter == 'a' || currentCharacter == 'e' || currentCharacter == 'i' || 
                currentCharacter == 'o' || currentCharacter == 'u') 
            {
                ++vowelCount;
            } 
            else if (currentCharacter >= 'a' && currentCharacter <= 'z') 
            {
                ++consonantCount;
            } 
            else if (currentCharacter >= '0' && currentCharacter <= '9') 
            {
                ++digitCount;
            } 
            else if (currentCharacter == ' ') 
            {
                ++spaceCount;
            }
        }

        printf("Vowels: %d\n", vowelCount);
        printf("Consonants: %d\n", consonantCount);
        printf("Digits: %d\n", digitCount);
        printf("White spaces: %d\n", spaceCount);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userChoice);

    } while (userChoice != 'x' && userChoice != 'X');

    return 0;
}
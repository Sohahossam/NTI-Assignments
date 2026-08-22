#include <stdio.h>

int main(void) 
{
    char userExitChoice;
    do 
    {
        char inputString[150];
        
        printf("Enter a string: ");
        scanf(" %[^\n]", inputString);
        
        int readIndex = 0;
        int writeIndex = 0;
        
        while (inputString[readIndex] != '\0') 
        {
            if ((inputString[readIndex] >= 'a' && inputString[readIndex] <= 'z') || 
                (inputString[readIndex] >= 'A' && inputString[readIndex] <= 'Z')) 
            {
                inputString[writeIndex] = inputString[readIndex];
                writeIndex++;
            }
            readIndex++;
        }
        
        inputString[writeIndex] = '\0';
        
        printf("Output String: %s\n", inputString);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userExitChoice);
        
    } while (userExitChoice != 'x' && userExitChoice != 'X');

    return 0;
}
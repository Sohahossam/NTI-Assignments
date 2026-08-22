#include <stdio.h>

int main(void) 
{
    char userExitChoice;
    do 
    {
        char inputText[150];

        printf("Enter some text\n");
        scanf(" %[^\n]", inputText);

        int readIndex = 0;
        int writeIndex = 0;
        int isPreviousSpace = 0;

        while (inputText[readIndex] != '\0') 
        {
            if (inputText[readIndex] == ' ' || inputText[readIndex] == '\t') 
            {
                if (!isPreviousSpace) 
                {
                    inputText[writeIndex] = ' ';
                    writeIndex++;
                    isPreviousSpace = 1;
                }
            } 
            else 
            {
                inputText[writeIndex] = inputText[readIndex];
                writeIndex++;
                isPreviousSpace = 0;
            }
            readIndex++;
        }
        inputText[writeIndex] = '\0';

        printf("Text after removing blanks\n%s\n", inputText);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &userExitChoice);

    } while (userExitChoice != 'x' && userExitChoice != 'X');

    return 0;
}
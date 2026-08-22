#include <stdio.h>

int main(void) 
{
    char array1[20] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    char array2[10] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    for (int i = 0; i < 10; i++) 
    {
        array1[10 + i] = array2[i];
    }

    for (int i = 0; i < 20 - 1; i++) 
    {
        for (int j = 0; j < 20 - i - 1; j++) 
        {
            if (array1[j] > array1[j + 1]) 
            {
                char temp = array1[j];
                array1[j] = array1[j + 1];
                array1[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < 20; i++) 
    {
        printf("%d ", array1[i]);
    }
    printf("\n");

    return 0;
}
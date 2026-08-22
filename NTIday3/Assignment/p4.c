#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;
    char even_count = 0;
    char odd_count = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements in array: ", size);
    for (char i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
        
        if (arr[i] % 2 == 0) 
        {
            even_count++;
        } 
        else 
        {
            odd_count++;
        }
    }

    printf("Total even elements: %d\n", even_count);
    printf("Total odd elements: %d\n", odd_count);

    return 0;
}
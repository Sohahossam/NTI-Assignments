#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;

    printf("Enter number of elements in array\n");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements\n", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int location;
    printf("Enter the location where you wish to delete element\n");
    scanf("%d", &location);

    if (location >= 1 && location <= size) 
    {
        for (int i = location - 1; i < size - 1; i++) 
        {
            arr[i] = arr[i + 1];
        }

        size--;

        printf("Resultant array is\n");
        for (int i = 0; i < size; i++) 
        {
            printf("%d\n", arr[i]);
        }
    } 
    else 
    {
        printf("Deletion not possible.\n");
    }

    return 0;
}
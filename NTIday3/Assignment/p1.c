#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;

    printf("Enter size of array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements in the array : ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements in array are: ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d, ", arr[i]);
    }
    
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter elements in array : ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("\nAll negative elements in array are : ");
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] < 0) 
        {
            printf("%d ", arr[i]);
        }
    }
    
    printf("\n");

    return 0;
}
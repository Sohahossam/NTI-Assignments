#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;
    int sum = 0;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));

    printf("Enter %d elements in the array: ", size);
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of all elements of array = %d\n", sum);

    return 0;
}
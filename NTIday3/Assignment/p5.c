#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;

    printf("Enter size of the array : ");
    scanf("%d", &size);

    int *arr = (int *)malloc((size + 1) * sizeof(int));

    printf("Enter elements in array : ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }

    int element;
    printf("Enter element to insert : ");
    scanf("%d", &element);

    int position;
    printf("Enter the element position : ");
    scanf("%d", &position);

    for (int i = size; i >= position; i--) 
    {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    size++;

    printf("Array elements after insertion : ");
    for (int i = 0; i < size; i++) 
    {
        printf("%d\t", arr[i]);
    }
    
    printf("\n");

    return 0;
}
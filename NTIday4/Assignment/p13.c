#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size;

    printf("Enter size of the array: ");
    scanf("%d", &size);

    int *arr = (int *)malloc(size * sizeof(int));
    int *even = (int *)malloc(size * sizeof(int));
    int *odd = (int *)malloc(size * sizeof(int));
    
    int even_count = 0;
    int odd_count = 0;

    printf("Enter elements in the array: ");
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) 
        {
            even[even_count] = arr[i];
            even_count++;
        } 
        else 
        {
            odd[odd_count] = arr[i];
            odd_count++;
        }
    }

    printf("\nElements of even array:\n");
    printf("Elements in the array: ");
    for (int i = 0; i < even_count; i++) 
    {
        printf("%d ", even[i]);
    }
    printf("\n");

    printf("\nElements of odd array:\n");
    printf("Elements in the array: ");
    for (int i = 0; i < odd_count; i++) 
    {
        printf("%d ", odd[i]);
    }
    printf("\n");

    return 0;
}
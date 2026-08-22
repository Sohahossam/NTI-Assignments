#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    int size1;

    printf("Input number of elements in first array\n");
    scanf("%d", &size1);

    int *arr1 = (int *)malloc(size1 * sizeof(int));

    printf("Input %d integers\n", size1);
    for (int i = 0; i < size1; i++) 
    {
        scanf("%d", &arr1[i]);
    }

    int size2;

    printf("Input number of elements in second array\n");
    scanf("%d", &size2);

    int *arr2 = (int *)malloc(size2 * sizeof(int));

    printf("Input %d integers\n", size2);
    for (int i = 0; i < size2; i++) 
    {
        scanf("%d", &arr2[i]);
    }

    int *merged = (int *)malloc((size1 + size2) * sizeof(int));
    int i = 0; 
    int j = 0; 
    int k = 0;

    while (i < size1 && j < size2) 
    {
        if (arr1[i] < arr2[j]) 
        {
            merged[k] = arr1[i];
            i++;
        } 
        else 
        {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < size1) 
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    while (j < size2) 
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }

    printf("Sorted array:\n");
    for (int m = 0; m < size1 + size2; m++) 
    {
        printf("%d\n", merged[m]);
    }

    return 0;
}
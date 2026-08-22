#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    char choice;
    do 
    {
        int size1;
        printf("enter size of array_1: ");
        scanf("%d", &size1);
        
        int *arr1 = (int *)malloc(size1 * sizeof(int));
        printf("enter elements of array_1:\n");
        for (int i = 0; i < size1; i++) 
        {
            printf("enter element_%d:", i + 1);
            scanf("%d", &arr1[i]);
        }
        
        int size2;
        printf("enter size of array_2: ");
        scanf("%d", &size2);
        
        int *arr2 = (int *)malloc(size2 * sizeof(int));
        printf("enter elements of array_2:\n");
        for (int i = 0; i < size2; i++) 
        {
            if (i == 0) 
            {
                printf(" enter element_%d:", i + 1);
            } 
            else 
            {
                printf("enter element_%d:", i + 1);
            }
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
        
        int median = (merged[size1 - 1] + merged[size1]) / 2;
        printf("Median is %d\n", median);
        
        printf("press k to continue or anything else to exit: ");
        scanf(" %c", &choice);
        
    } while (choice == 'k' || choice == 'K');

    return 0;
}
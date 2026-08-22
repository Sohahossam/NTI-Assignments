#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
    char choice;
    do 
    {
        int arr[10];
        int n;

        printf("Enter 10 elements array: ");
        for (int i = 0; i < 10; i++) 
        {
            scanf("%d", &arr[i]);
        }

        printf("Enter number of times to left rotate: ");
        scanf("%d", &n);

        printf("Array before rotation:");
        for (int i = 0; i < 10; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n\n");

        n = n % 10;

        int *temp = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; i++) 
        {
            temp[i] = arr[i];
        }

        for (int i = 0; i < 10 - n; i++) 
        {
            arr[i] = arr[i + n];
        }

        for (int i = 0; i < n; i++) 
        {
            arr[10 - n + i] = temp[i];
        }

        printf("Array after rotation\n");
        for (int i = 0; i < 10; i++) 
        {
            printf("%d ", arr[i]);
        }
        printf("\n\n");

        free(temp);

        printf("Press x to exit or anything else to continue: ");
        scanf(" %c", &choice);

    } while (choice != 'x' && choice != 'X');

    return 0;
}
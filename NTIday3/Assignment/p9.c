#include <stdio.h>

int main(void) 
{
    int arr[10];

    printf("enter the element of an array\n");
    for (int i = 0; i < 10; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Alternate elements of a given array\n");
    for (int i = 0; i < 10; i += 2) 
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
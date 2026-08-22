#include <stdio.h>
#include <limits.h>

int main(void)
{
    int arr[1000];
    int size;
    int i;
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    printf("Enter size of the array (1-1000): ");
    scanf("%d", &size);

    if (size < 2 || size > 1000)
    {
        printf("Invalid array size.\n");
        return 1;
    }

    printf("Enter elements in the array: ");

    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] < largest)
        {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN)
    {
        printf("There is no second largest element.\n");
    }
    else
    {
        printf("First largest = %d\n", largest);
        printf("Second largest = %d\n", second_largest);
    }

    return 0;
}
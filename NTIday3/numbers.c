#include <stdio.h>

int main()
{
    int arr[5];
    int i;
    int odd = 0;
    int even = 0;

    for(i = 0; i < 5; i++)
    {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Number of even numbers = %d\n", even);
    printf("Number of odd numbers = %d\n", odd);

    return 0;
}
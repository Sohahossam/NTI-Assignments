#include <stdio.h>

int main()
{
    unsigned char arr[100];
    unsigned char n;
    unsigned char num;
    unsigned char count = 0;

    printf("Enter number of elements: ");
    scanf("%hhu", &n);

    printf("Enter the elements:\n");

    for (unsigned char i = 0; i < n; i++)
    {
        scanf("%hhu", &arr[i]);
    }

    printf("Enter the number to search: ");
    scanf("%hhu", &num);

    for (unsigned char i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    printf("%d is repeated %d times.\n", num, count);

    return 0;
}
#include <stdio.h>

void ScanArray(char arr[], char size);
void DisplayArray(char arr[], char size);
char LinearSearch(char arr[], char size, char SearchValue);
char BinarySearch(char arr[], char size, char SearchValue);
void BubbleSort(char arr[], char size, char OrderType);

int main(void)
{
    char Name[50];
    char arr[5];
    char searchValue;
    char orderType;
    char repeats;
    char index;

    printf("Enter your name: ");
    scanf("%49s", Name);

    printf("Welcome Mr.%s\n", Name);

    ScanArray(arr, 5);

    printf("Array: ");
    DisplayArray(arr, 5);

    printf("Enter Search Value: ");
    scanf("%hhd", &searchValue);

    repeats = LinearSearch(arr, 5, searchValue);
    printf("Number of repeats = %d\n", repeats);

    printf("Enter Order Type (1=Ascending, 2=Descending): ");
    scanf("%hhd", &orderType);

    BubbleSort(arr, 5, orderType);

    printf("Sorted Array: ");
    DisplayArray(arr, 5);

    index = BinarySearch(arr, 5, searchValue);

    printf("Index = %d\n", index);

    return 0;
}

void ScanArray(char arr[], char size)
{
    char i;

    printf("Enter 5 elements:\n");

    for (i = 0; i < size; i++)
    {
        scanf("%hhd", &arr[i]);
    }
}

void DisplayArray(char arr[], char size)
{
    char i;

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

char LinearSearch(char arr[], char size, char SearchValue)
{
    char i;
    char count = 0;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == SearchValue)
        {
            count++;
        }
    }

    return count;
}

char BinarySearch(char arr[], char size, char SearchValue)
{
    char low = 0;
    char high = size - 1;
    char mid;

    while (low <= high)
    {
        mid = low + ((high - low) / 2);

        if (arr[mid] == SearchValue)
        {
            return mid;
        }
        else if (arr[mid] < SearchValue)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

void BubbleSort(char arr[], char size, char OrderType)
{
    char i;
    char j;
    char temp;

    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - 1 - i; j++)
        {
            if ((OrderType == 1 && arr[j] > arr[j + 1]) ||
                (OrderType == 2 && arr[j] < arr[j + 1]))
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
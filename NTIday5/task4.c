#include <stdio.h>

static int is_prime(int target_number)
{
    int prime_status = 1;

    if (target_number < 2)
    {
        prime_status = 0;
    }

    for (int divisor = 2;
         (prime_status != 0) && (divisor * divisor <= target_number);
         ++divisor)
    {
        if (target_number % divisor == 0)
        {
            prime_status = 0;
        }
    }

    return prime_status;
}

int prime_operation(int first_value, int second_value)
{
    int prime_count = 0;
    int min_value;
    int max_value;

    if (first_value < second_value)
    {
        min_value = first_value;
        max_value = second_value;
    }
    else
    {
        min_value = second_value;
        max_value = first_value;
    }

    for (int current_value = min_value;
         current_value <= max_value;
         ++current_value)
    {
        if (is_prime(current_value))
        {
            prime_count++;
        }
    }

    return prime_count;
}

int main(void)
{
    int num1;
    int num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Prime Operation = %d\n",
           prime_operation(num1, num2));

    return 0;
}
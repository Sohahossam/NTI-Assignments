#include <stdio.h>

#define SIZE (100U)

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    unsigned int i = 0U;

    printf("Enter string s1: ");
    scanf("%99s", s1);

    while (s1[i] != '\0')
    {
        s2[i] = s1[i];
        i++;
    }

    s2[i] = '\0';

    printf("String s2: %s\n", s2);

    return 0;
}
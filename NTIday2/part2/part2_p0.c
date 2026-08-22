#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    while (1) {
        printf("Enter an alphabet: ");
        if (scanf(" %c", &ch) != 1) {
            break;
        }

        char lower = tolower(ch);

        if ((lower >= 'a' && lower <= 'z')) {
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                printf("%c is a vowel.\n\n", ch);
            } else {
                printf("%c is a consonant.\n\n", ch);
            }
        } else {
            printf("%c is not an alphabet.\n\n", ch);
        }
    }

    return 0;
}
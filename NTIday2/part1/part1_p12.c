#include <stdio.h>

int main() {
    int num;
    int rotation;
    int leftRotated;
    int rightRotated;
    int bits = sizeof(int) * 8;

    while (1) {
        printf("Enter a number: ");
        if (scanf("%d", &num) != 1) {
            break;
        }

        printf("Enter number of rotation: ");
        if (scanf("%d", &rotation) != 1) {
            break;
        }

        rotation = rotation % bits;

        leftRotated = (num << rotation) | ((unsigned int)num >> (bits - rotation));
        rightRotated = ((unsigned int)num >> rotation) | (num << (bits - rotation));

        printf("%d left rotated %d times = %d\n\n", num, rotation, leftRotated);
        printf("%d right rotated %d times = %d\n\n", num, rotation, rightRotated);
    }

    return 0;
}
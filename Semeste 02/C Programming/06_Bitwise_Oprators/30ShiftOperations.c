#include <stdio.h>
#include <conio.h>

void main() {
    int num = 16;

    printf("Original number: %d\n", num);
    printf("Left shift by 2: %d\n", num << 2);
    printf("Right shift by 2: %d\n", num >> 2);

    getch();
}

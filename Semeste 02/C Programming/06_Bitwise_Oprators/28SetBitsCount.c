#include <stdio.h>
#include <conio.h>

void main() {
    int num, count = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num) {
        count += num & 1;
        num >>= 1;
    }

    printf("Number of set bits: %d\n", count);

    getch();
}

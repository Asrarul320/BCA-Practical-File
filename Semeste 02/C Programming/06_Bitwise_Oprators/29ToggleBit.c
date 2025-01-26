#include <stdio.h>
#include <conio.h>

void main() {
    int num, position;

    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Enter position to toggle bit: ");
    scanf("%d", &position);

    num ^= (1 << position);

    printf("Number after toggling bit at position %d: %d\n", position, num);

    getch();
}

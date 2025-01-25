#include <stdio.h>
#include <conio.h>

#define SQUARE(x) ((x) * (x))
#define CUBE(x) ((x) * (x) * (x))

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square of %d is: %d\n", num, SQUARE(num));
    printf("Cube of %d is: %d\n", num, CUBE(num));

    getch();
}

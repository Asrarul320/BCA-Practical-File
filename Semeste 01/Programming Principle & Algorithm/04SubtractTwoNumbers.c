#include <stdio.h>
#include <conio.h>
void main() {
    int a, b, difference;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    difference = a - b;
    printf("Difference = %d\n", difference);
    getch();
}
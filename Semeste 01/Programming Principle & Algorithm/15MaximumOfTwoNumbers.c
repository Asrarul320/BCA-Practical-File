#include <stdio.h>
#include <conio.h>
void main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d is the maximum.\n", a);
    else
        printf("%d is the maximum.\n", b);
    getch();
}
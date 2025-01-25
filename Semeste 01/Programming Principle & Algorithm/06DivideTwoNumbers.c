#include <stdio.h>
#include <conio.h>
void main() {
    float a, b, division;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    if (b != 0) {
        division = a / b;
        printf("Result = %.2f\n", division);
    } else {
        printf("Error: Division by zero is not allowed.\n");
    }
    getch();
}
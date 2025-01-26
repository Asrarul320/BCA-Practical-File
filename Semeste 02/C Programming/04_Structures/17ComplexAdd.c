#include <stdio.h>
#include <conio.h>

struct Complex {
    float real;
    float imag;
};

void main() {
    struct Complex num1, num2, sum;

    printf("Enter real and imaginary parts of first complex number: ");
    scanf("%f %f", &num1.real, &num1.imag);
    printf("Enter real and imaginary parts of second complex number: ");
    scanf("%f %f", &num2.real, &num2.imag);

    sum.real = num1.real + num2.real;
    sum.imag = num1.imag + num2.imag;

    printf("\nSum of complex numbers: %.2f + %.2fi\n", sum.real, sum.imag);

    getch();
}

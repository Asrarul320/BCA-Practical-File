#include <stdio.h>
#include <conio.h>
void main() {
    float radius, area;
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    area = 3.14159 * radius * radius;
    printf("Area of the circle = %.2f\n", area);
    getch();
}
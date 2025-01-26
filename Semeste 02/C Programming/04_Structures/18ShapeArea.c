#include <stdio.h>
#include <conio.h>

struct Circle {
    float radius;
};

struct Rectangle {
    float length;
    float width;
};

void main() {
    struct Circle circle;
    struct Rectangle rectangle;

    printf("Enter radius of circle: ");
    scanf("%f", &circle.radius);
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &rectangle.length, &rectangle.width);

    printf("\nArea of circle: %.2f\n", 3.14 * circle.radius * circle.radius);
    printf("Area of rectangle: %.2f\n", rectangle.length * rectangle.width);

    getch();
}

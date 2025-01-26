#include <iostream>
#include <conio.h>
using namespace std;

class Rectangle {
    float length, width;

public:
    void setDimensions(float l, float w) {
        length = l;
        width = w;
    }

    float calculateArea() {
        return length * width;
    }

    float calculatePerimeter() {
        return 2 * (length + width);
    }
};

void main() {
    Rectangle rect;
    float l, w;

    cout << "Enter Length and Width of Rectangle: ";
    cin >> l >> w;

    rect.setDimensions(l, w);
    cout << "Area: " << rect.calculateArea() << endl;
    cout << "Perimeter: " << rect.calculatePerimeter() << endl;

    getch();
}

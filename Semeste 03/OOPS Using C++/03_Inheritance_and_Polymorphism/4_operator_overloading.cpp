#include <iostream>
#include <conio.h>
using namespace std;

class Complex {
    float real, imag;

public:
    Complex() : real(0), imag(0) {}

    void input() {
        cout << "Enter Real and Imaginary Parts: ";
        cin >> real >> imag;
    }

    Complex operator+(Complex c) {
        Complex temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }

    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};

void main() {
    Complex c1, c2, c3;

    cout << "Enter First Complex Number:" << endl;
    c1.input();

    cout << "Enter Second Complex Number:" << endl;
    c2.input();

    c3 = c1 + c2; // Operator overloading

    cout << "Sum of Complex Numbers: ";
    c3.display();

    getch();
}

#include <iostream>
#include <conio.h>
using namespace std;

class Calculator {
public:
    void add(int a, int b) { cout << "Addition: " << a + b << endl; }
    void subtract(int a, int b) { cout << "Subtraction: " << a - b << endl; }
    void multiply(int a, int b) { cout << "Multiplication: " << a * b << endl; }
    void divide(int a, int b) {
        if (b != 0) {
            cout << "Division: " << a / b << endl;
        } else {
            cout << "Division by zero is not allowed!" << endl;
        }
    }
};

void main() {
    Calculator calc;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    calc.add(num1, num2);
    calc.subtract(num1, num2);
    calc.multiply(num1, num2);
    calc.divide(num1, num2);

    getch();
}

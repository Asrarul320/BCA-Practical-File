#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers (numerator and denominator): ";
    cin >> a >> b;

    try {
        if (b == 0) {
            throw "Division by zero is not allowed!";
        }
        cout << "Result: " << (a / b) << endl;
    } catch (const char *msg) {
        cout << "Error: " << msg << endl;
    }

    return 0;
}

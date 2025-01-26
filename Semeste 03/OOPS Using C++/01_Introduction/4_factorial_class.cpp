#include <iostream>
#include <conio.h>
using namespace std;

class Factorial {
public:
    int calculate(int n) {
        int fact = 1;
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
        return fact;
    }
};

void main() {
    Factorial factObj;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Factorial of " << number << " is " << factObj.calculate(number) << endl;

    getch();
}

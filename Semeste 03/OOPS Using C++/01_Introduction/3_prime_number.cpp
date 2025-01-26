#include <iostream>
#include <conio.h>
using namespace std;

class PrimeCheck {
public:
    bool isPrime(int n) {
        if (n <= 1) return false;
        for (int i = 2; i <= n / 2; i++) {
            if (n % i == 0) return false;
        }
        return true;
    }
};

void main() {
    PrimeCheck pc;
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (pc.isPrime(number)) {
        cout << number << " is a Prime Number." << endl;
    } else {
        cout << number << " is not a Prime Number." << endl;
    }

    getch();
}

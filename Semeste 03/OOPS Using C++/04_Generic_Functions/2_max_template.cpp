#include <iostream>
#include <conio.h>
using namespace std;

template <typename T>
T findMax(T a, T b) {
    return (a > b) ? a : b;
}

void main() {
    int x = 10, y = 20;
    cout << "Max of " << x << " and " << y << " is " << findMax(x, y) << endl;

    float a = 3.14, b = 2.71;
    cout << "Max of " << a << " and " << b << " is " << findMax(a, b) << endl;

    char c1 = 'A', c2 = 'Z';
    cout << "Max of " << c1 << " and " << c2 << " is " << findMax(c1, c2) << endl;

    getch();
}

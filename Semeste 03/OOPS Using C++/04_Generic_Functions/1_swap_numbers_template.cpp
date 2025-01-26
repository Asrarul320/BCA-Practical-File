#include <iostream>
#include <conio.h>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

void main() {
    int x = 10, y = 20;
    cout << "Before Swap: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After Swap: x = " << x << ", y = " << y << endl;

    float a = 1.1, b = 2.2;
    cout << "\nBefore Swap: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After Swap: a = " << a << ", b = " << b << endl;

    getch();
}

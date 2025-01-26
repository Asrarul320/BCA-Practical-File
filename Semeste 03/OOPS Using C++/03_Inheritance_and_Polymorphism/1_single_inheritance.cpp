#include <iostream>
#include <conio.h>
using namespace std;

class Base {
public:
    void displayBase() {
        cout << "This is the Base Class." << endl;
    }
};

class Derived : public Base {
public:
    void displayDerived() {
        cout << "This is the Derived Class." << endl;
    }
};

void main() {
    Derived obj;
    obj.displayBase();
    obj.displayDerived();
    getch();
}

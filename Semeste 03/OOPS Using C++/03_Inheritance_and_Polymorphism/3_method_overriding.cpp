#include <iostream>
#include <conio.h>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Animals make sounds." << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Dogs bark." << endl;
    }
};

void main() {
    Dog dogObj;
    dogObj.sound(); // Calls the overridden method in Dog class
    getch();
}

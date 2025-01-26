#include <iostream>
#include <conio.h>
using namespace std;

class Grandparent {
public:
    void displayGrandparent() {
        cout << "This is the Grandparent Class." << endl;
    }
};

class Parent : public Grandparent {
public:
    void displayParent() {
        cout << "This is the Parent Class." << endl;
    }
};

class Child : public Parent {
public:
    void displayChild() {
        cout << "This is the Child Class." << endl;
    }
};

void main() {
    Child obj;
    obj.displayGrandparent();
    obj.displayParent();
    obj.displayChild();
    getch();
}

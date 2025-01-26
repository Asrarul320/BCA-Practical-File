#include <iostream>
#include <conio.h>
using namespace std;

class HelloWorld {
public:
    void display() {
        cout << "Hello, World!" << endl;
    }
};

void main() {
    HelloWorld obj;
    obj.display();
    getch();
}

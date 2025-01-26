#include <iostream>
#include <conio.h>
using namespace std;

class Student {
    string name;
    int rollNo;
    float marks;

public:
    void inputDetails() {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() {
        cout << "\nStudent Details:\n";
        cout << "Name: " << name << "\nRoll No: " << rollNo << "\nMarks: " << marks << endl;
    }
};

void main() {
    Student s1;
    s1.inputDetails();
    s1.displayDetails();
    getch();
}

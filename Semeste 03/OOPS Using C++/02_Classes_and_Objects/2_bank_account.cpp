#include <iostream>
#include <conio.h>
using namespace std;

class BankAccount {
    string accountHolder;
    int accountNumber;
    float balance;

public:
    void createAccount() {
        cout << "Enter Account Holder Name: ";
        cin >> accountHolder;
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }

    void withdraw(float amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", Remaining Balance: " << balance << endl;
        }
    }

    void displayBalance() {
        cout << "Account Holder: " << accountHolder << ", Balance: " << balance << endl;
    }
};

void main() {
    BankAccount account;
    account.createAccount();
    account.deposit(500);
    account.withdraw(300);
    account.displayBalance();
    getch();
}

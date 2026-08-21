#include <iostream>
#include <string>
using namespace std;

class BankAccount {
protected:
    string accountNumber;
    string accountHolderName;
    double balance; // Using double for higher precision in financial values

public: // Explicitly declare methods and constructor public
    BankAccount(string _accountNumber, string _accountHolderName, double _initialBalance)
        : accountNumber(_accountNumber), accountHolderName(_accountHolderName), balance(_initialBalance) {}

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << " | New Balance: " << balance << endl;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && balance >= amount) {
            balance -= amount;
            cout << "Balance remaining:\t" << balance << endl;
        } else {
            cout << "Insufficient balance " << endl;
        }
    }

    void displayDetails() {
        cout << "Account Number:\t" << accountNumber << endl;
        cout << "Account holder name:\t" << accountHolderName << endl;
        cout << "Current balance:\t" << balance << endl;
    }
};
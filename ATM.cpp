#include <iostream>
#include <string>
using namespace std;

class ATM {
private:
    string name;
    int accountNumber;
    int pin;
    double balance;

public:
    // Constructor
    ATM() {
        name = "Rahul Kumar";
        accountNumber = 12345;
        pin = 1234;
        balance = 5000;
    }

    // PIN verification
    bool login() {
        int enteredPin;

        cout << "==============================" << endl;
        cout << "        WELCOME TO ATM        " << endl;
        cout << "==============================" << endl;

        cout << "Enter your PIN: ";
        cin >> enteredPin;

        if (enteredPin == pin) {
            cout << "\nLogin Successful!" << endl;
            return true;
        } 
        else {
            cout << "\nWrong PIN!" << endl;
            return false;
        }
    }

    // Check balance
    void checkBalance() {
        cout << "\n------------------------" << endl;
        cout << "Current Balance: Rs. " << balance << endl;
        cout << "------------------------" << endl;
    }

    // Deposit money
    void deposit() {
        double amount;

        cout << "\nEnter amount to deposit: Rs. ";
        cin >> amount;

        if (amount > 0) {
            balance = balance + amount;

            cout << "Deposit Successful!" << endl;
            cout << "New Balance: Rs. " << balance << endl;
        } 
        else {
            cout << "Invalid amount!" << endl;
        }
    }

    // Withdraw money
    void withdraw() {
        double amount;

        cout << "\nEnter amount to withdraw: Rs. ";
        cin >> amount;

        if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        }
        else if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        }
        else {
            balance = balance - amount;

            cout << "Withdrawal Successful!" << endl;
            cout << "Please collect your cash." << endl;
            cout << "Remaining Balance: Rs. " << balance << endl;
        }
    }

    // Account details
    void accountDetails() {
        cout << "\n==============================" << endl;
        cout << "       ACCOUNT DETAILS        " << endl;
        cout << "==============================" << endl;

        cout << "Account Holder : " << name << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance        : Rs. " << balance << endl;
    }

    // ATM menu
    void menu() {
        int choice;

        do {
            cout << "\n==============================" << endl;
            cout << "           ATM MENU           " << endl;
            cout << "==============================" << endl;

            cout << "1. Check Balance" << endl;
            cout << "2. Deposit Money" << endl;
            cout << "3. Withdraw Money" << endl;
            cout << "4. Account Details" << endl;
            cout << "5. Exit" << endl;

            cout << "\nEnter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    checkBalance();
                    break;

                case 2:
                    deposit();
                    break;

                case 3:
                    withdraw();
                    break;

                case 4:
                    accountDetails();
                    break;

                case 5:
                    cout << "\nThank you for using our ATM!" << endl;
                    cout << "Have a nice day!" << endl;
                    break;

                default:
                    cout << "\nInvalid choice!" << endl;
                    cout << "Please select between 1-5." << endl;
            }

        } while (choice != 5);
    }
};

int main() {

    ATM user;

    if (user.login()) {
        user.menu();
    }
    else {
        cout << "Access Denied!" << endl;
    }

    return 0;
}
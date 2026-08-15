#include <iostream>
using namespace std;

int main() {
    int choice;
    int a, b;

    for (int i = 1; i <= 5; i++) {

        cout << "===== CALCULATOR =====";
        cout << "1. Addition\n";
        cout << "2. Subtraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "5. Exit\n";

        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Program ended.";
            break;
        }

        cout << "Enter two numbers: ";
        cin >> a >> b;

        if (choice == 1) {
            cout << "Result = " << a + b;
        }
        else if (choice == 2) {
            cout << "Result = " << a - b;
        }
        else if (choice == 3) {
            cout << "Result = " << a * b;
        }
        else if (choice == 4) {
            if (b == 0) {
                cout << "Cannot divide by zero";
            }
            else {
                cout << "Result = " << (double)a / b;
            }
        }
        else {
            cout << "Invalid choice!";
        }
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double temperature;
    int choice;

    cout << "===== TEMPERATURE CONVERTER =====" << endl;
    cout << "1. Celsius to Fahrenheit" << endl;
    cout << "2. Fahrenheit to Celsius" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    cout << "Enter temperature: ";
    cin >> temperature;

    if (choice == 1) {
        double fahrenheit = (temperature * 9 / 5) + 32;
        cout << "Temperature in Fahrenheit: " << fahrenheit;
    }
    else if (choice == 2) {
        double celsius = (temperature - 32) * 5 / 9;
        cout << "Temperature in Celsius: " << celsius;
    }
    else {
        cout << "Invalid choice";
    }

    return 0;
}
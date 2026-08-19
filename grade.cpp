#include <iostream>
using namespace std;

int main() {
    float marks, percentage;

    cout << "Enter marks (out of 100): ";
    cin >> marks;

    percentage = marks;

    cout << "Percentage: " << percentage << "%" << endl;

    if (marks >= 90)
        cout << "Grade: O";
    else if (marks >= 80)
        cout << "Grade: A+";
    else if (marks >= 70)
        cout << "Grade: A";
    else if (marks >= 60)
        cout << "Grade: B";
    else if (marks >= 50)
        cout << "Grade: C";
    else
        cout << "Grade: F";

    return 0;
}
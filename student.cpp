#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollNo;
    int marks1, marks2, marks3;

public:
    void getData() {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter marks of 3 subjects: ";
        cin >> marks1 >> marks2 >> marks3;
    }

    void displayResult() {
        int total = marks1 + marks2 + marks3;
        float percentage = total / 3.0;

        cout << "\n----- Student Result -----\n";
        cout << "Name       : " << name << endl;
        cout << "Roll Number: " << rollNo << endl;
        cout << "Total Marks: " << total << "/300" << endl;
        cout << "Percentage : " << percentage << "%" << endl;

        if (percentage >= 90)
            cout << "Grade      : A+" << endl;
        else if (percentage >= 80)
            cout << "Grade      : A" << endl;
        else if (percentage >= 70)
            cout << "Grade      : B" << endl;
        else if (percentage >= 60)
            cout << "Grade      : C" << endl;
        else if (percentage >= 50)
            cout << "Grade      : D" << endl;
        else
            cout << "Grade      : F" << endl;
    }
};

int main() {
    Student s1;

    s1.getData();
    s1.displayResult();

    return 0;
}
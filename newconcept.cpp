#include <iostream>
using namespace std;

// Parent class
class Student {
public:
    string name;
    int rollNo;

    void getStudent() {
        cout << "Enter name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

// Child class
class Marks : public Student {
public:
    int marks;

    void getMarks() {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "\nStudent Details" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main() {
    Marks s;

    s.getStudent();
    s.getMarks();
    s.display();

    return 0;
}
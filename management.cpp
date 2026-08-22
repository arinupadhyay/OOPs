#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n, int a) {
        name = n;
        age = a;
    }

    virtual void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Derived class
class Student : public Person {
private:
    int rollNo;
    float marks;

public:
    Student(string n, int a, int r, float m)
        : Person(n, a) {
        rollNo = r;
        marks = m;
    }

    char getGrade() {
        if (marks >= 90)
            return 'O';
        else if (marks >= 80)
            return 'A';
        else if (marks >= 70)
            return 'B';
        else if (marks >= 60)
            return 'C';
        else if (marks >= 50)
            return 'D';
        else
            return 'F';
    }

    void display() override {
        cout << "\n----- Student Details -----" << endl;
        cout << "Name     : " << name << endl;
        cout << "Age      : " << age << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Marks    : " << marks << endl;
        cout << "Grade    : " << getGrade() << endl;
    }
};

int main() {
    string name;
    int age, rollNo;
    float marks;

    cout << "===== Student Management System =====" << endl;

    cout << "Enter student name: ";
    getline(cin, name);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks: ";
    cin >> marks;

    Student s(name, age, rollNo, marks);

    s.display();

    return 0;
}
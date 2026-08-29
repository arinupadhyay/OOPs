#include <iostream>
using namespace std;

// Parent class
class Employee {
protected:
    string name;
    int employeeID;
    double salary;

public:
    void setEmployeeDetails(string n, int id, double s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void displayEmployeeDetails() {
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Salary        : " << salary << endl;
    }
};

// Child class
class Manager : public Employee {
private:
    string department;

public:
    void setManagerDetails(string n, int id, double s, string dept) {
        setEmployeeDetails(n, id, s);
        department = dept;
    }

    void displayManagerDetails() {
        displayEmployeeDetails();
        cout << "Department    : " << department << endl;
    }
};

int main() {

    Manager m;

    m.setManagerDetails("Rahul", 101, 75000, "Software Development");

    cout << "----- Manager Details -----" << endl;
    m.displayManagerDetails();

    return 0;
}
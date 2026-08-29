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

<<<<<<< HEAD
    void displayEmployeeDetails() {
        cout << "Employee Name : " << name << endl;
        cout << "Employee ID   : " << employeeID << endl;
        cout << "Salary        : " << salary << endl;
=======
    Vehicle(string _name, string _model, int _noOfTyres)
    {

        cout << "I am inside a car ctor" << endl;
        this->name = _name;
        this->model = _model;
        this->noOfTyres = _noOfTyres;
    }

public:
    void start_engine()
    {
        cout << "engine isstrting " << name << " " << endl;
    }

    void stop_engine()
    {

        cout << "engine is stopping" << name << " " << endl;
>>>>>>> 11b6f536dddd578041d7c1bd630d664c6328d409
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
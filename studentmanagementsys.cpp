#include <iostream>

using namespace std;

class Student {
    private:
    string name;
    int rno;
    float marks;

    public:
    void displayStudents(){
        cout<<"Name: "<< name <<endl;
        cout<<"Roll No"<< rno << endl;
        cout<< "Marks" << marks << endl;
    }

     void calculateGrade() {
        if (marks >= 90)
            cout << "Grade: A+" << endl;
        else if (marks >= 80)
            cout << "Grade: A" << endl;
        else if (marks >= 70)
            cout << "Grade: B" << endl;
        else if (marks >= 60)
            cout << "Grade: C" << endl;
        else if (marks >= 50)
            cout << "Grade: D" << endl;
        else
            cout << "Grade: F" << endl;
    }

    Student(string name, int rno, float marks){
        this->name = name;
       this-> rno = rno;
        this->marks = marks;
    }
};


int main () {

    string name;
    int rno;
    int marks;

    cout<<"enter name:\t"<<endl;
    cin>>name;

    cout<<"Enter roll no\t"<<endl;
    cin>>rno;

    cout<<"enter marks:\t"<<endl;
    cin>>marks;

    Student s1(name,rno,marks);

    s1.displayStudents();
    s1.calculateGrade();








    return 0;
}
#include <iostream>
#include <string>

using namespace std;

class Teacher {

    // private:
    // double salary; // now salary has become private memebr of class and cannot be printed and when printed it will show error     // properties / attributes
public:  // this is a a ccess modifier , there r 3 kinds of it private, public,protected 
string name;
string dept;
string subject;

    double salary;


 Teacher(string n, string d,string s, double sal) {
     // this is a constructor

    // this is a non parametrused tyoe of constructir 
    // there r 3 kinds of constructor one is above 2nd is parameterised and 3rd is copied constructor 


    name = n;
    dept  = d;
    subject = sal;
//    dept = "Computer Science ";

// copy constructor (default) used to copy properties of one object into aoter it is alsocalled as the dault constructor 







 }


    // method - methds matlb functuon inside the class  or they r called as memebr function 
//  constructors name is same as the nam of the class and has no return type 

    void changeDept (string newDept){
        dept = newDept;

    }

    void setSalary (double s ){
        salary  = s;

    }

    double  getSalary() {
        return salary ;
    }


};


class Account {
private:
  double balance;
  string password;


    public:

    string accountId;
    string username;
  

};

int main(){

    // hi im constructer will be printed 5 time because there r 5 objects creatd for the teacher class
// this makes sure that the constructer is called when ever A object is created for a class 



Teacher obj1; //constructor is called as soon as the object is created 
Teacher obj2;
Teacher obj3;
Teacher obj4;
Teacher obj5;

obj1.name= "Arinnnnn Upadhyay";
obj1.subject = "Maths";
obj1.salary= 100000.0;
// obj1.dept= "Computer Science";

cout<<obj1.name<<"\n";
cout<<obj1.subject<<"\n";
cout<<obj1.salary<<"\n";
cout<<obj1.dept<<"\n";

// memory allocation of th eocnstructur happens when the object is creaTED AND as it is called the memory is allocated at that moment 
// conis always created with public access specifier not a private one coz it is automatically called whenevr the obj is created of that clsss
//   memory is allocated for the object not thet class and that too hapens when the constructor i called 




    return 0;
}

#include <iostream>
using namespace std;
class student
{
public:
    string name;
    int rollno;
    float cgpa;

private:
    string gf;
    public:
    // constructor parameterised constructor

    student(string name, int rollno, float cgpa, string gf)
    {
        cout << "parameterised constructor called" << endl;
        this->name = name;
        this->rollno = rollno;
        this->cgpa = cgpa;
        this->gf = gf;
    }
    // copy constructor
    student(const student &s)
    {
        cout << "copy constructor called" << endl;
        this->name = s.name;
        this->rollno = s.rollno;
        this->cgpa = s.cgpa;
        this->gf = s.gf;
    }
    void study()
    {
        cout << this->name << " is studying" << endl;
    }
    void sleep()
    {
        cout << this->name << " is sleeping" << endl;
    }
    void bunk()
    {
        cout << this->name << " is bunking all classes and trying to be smart in front of all people !!" << endl;
    }
    void gfchatting()
    {
        cout << this->name << " is chatting with his girlfriend" << endl;
    }
    // destructor
    ~student()
    {
        cout << "destructor called" << endl;
    }
};
int main()
{
    /*student s1("Garry", 1083, 9.5, true);
    student s2("ronaldo", 1084, 4.50, false);
    s1.study();
    s2.bunk();
    cout<<s1.name<<"  "<<s1.rollno<<"  "<<s1.cgpa<<"  "<<s1.gf<<endl;
    cout<<s2.name<<"  "<<s2.rollno<<"  "<<s2.cgpa<<"  "<<s2.gf<<endl;

    student s3 = s1; // copy constructor called  //student s3(s1);
    cout<<s3.name<<"  "<<s3.rollno<<"  "<<s3.cgpa<<"  "<<s3.gf<<endl;
    //dynamic memory allocation
    student *s4 = new student("sunny", 1085, 9.6, true);
    cout<<s4->name<<"  "<<s4->rollno<<"  "<<s4->cgpa<<"  "<<s4->gf<<endl;
    delete s4; // deletion of dynamically allocated memory*/
    student s8("youndro", 1083, 9.5, "selena");
    cout << s8.name << "  " << s8.rollno << "  " << s8.cgpa << "  " <<endl;
    return 0;
}

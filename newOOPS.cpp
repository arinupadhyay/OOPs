#include <iostream>
#include <string>

using namespace std;


class Student{
    private: //access specifier

    // attributes
    int id;
    int age;
    string name;
    int nos;
     float gpa ;
    string gf;

    // behaviour / methods / functions


    // ctor: default ctor (constructor )

   
   

    public:

    Student(){
        cout<<"Student default constructor called"<<endl;
    } // same name as the class 

    // deTor: default distructor (its only default)

    // ~Student(){
    //     cout<<"Student default deto (default destructor) called"<<endl;

    // }

    // ctor: Parameterised constructor 

    Student (int id, int age, string name, int nos, float gpa , string gf )
    {
        cout<<"Student parameterised constructor called"<<endl;
        this->id= id;
        this->name= name;
        this->nos= nos;
        this->age= age;
        this->gpa = gpa ;
        this->gf= gf;
    }

    // copy constructor 

    Student (const Student &srcobj ){ //here srcpbj signifies a that means a will be passed as aapara,etr 
        
        cout<<"Studnet Parameterised copy constructor is called  "<< endl;

        this->id= srcobj.id;
        this->age= srcobj.age;
        this->name = srcobj.name;
        this->nos = srcobj.nos;
    } //const means the source obj which is srcobj will not be changed that means the cource from which iam copying the datta is not changed and is always constant 


// inheritence is  a way to create a class from existing class 
// creating a child class forma parent class

// is a relation b/w 2 things signifies inheritence in  cpp 

// parent class contains all the common attributes of its child class and by this we make the concept of inheritence functional 







    void study(){
        cout<<this->name<<"\t"<<" is STUDING"<< endl;
    }

    void sleep(){
        cout<<this->name<<" is Sleeping "<< endl;

    }

    void bunk(){
        cout<<this->name<<" has been bunking the class "<<endl;
    }


    float getAge( int age ){
        return age;
    }


    // we can make class in side it we can set all the variable to private and access the functions by creating new function 




    // private:

    private:
    void gfChatting(){
        cout<<this->name<<" is chatting with gf "<<endl;

    }

};





int main(){
    // code
//     Student A;
//     A.id= 1;
//     A.age=15;
//     A.name= "Ranu";
//     A.nos=6;
// //  cout<<A.id<<endl;
// //  cout<<A.name<<endl;
// //  cout<<A.nos<<endl;


// A.study();

// Student B;
// B.id= 2;
// B.age = 15;
// B.name="rahul";
// B.nos=5;

// B.bunk();

// Student A(1,15,"Ranu",6);
// Student B(1,15,"RAhil",6);
// Student C(1,15,"SONU",6);
// Student D(1,15,"monu",6);
// Student E(1,15,"mohan",6);


// cout<<A.name<<" "<<A.age<< endl;


// copy constructor 

// Student C = A;

// cout<<C.name<<" "<<A.name<<endl;

// dynamic allocation , or student pointer;

// Student *ptrA = new Student (1,14,"Babban", 7);
// cout<< ptrA->name <<endl;
// cout<< ptrA->age <<endl;

// here destructor will not be called automatucally as in cpp we have to delete it manually
// whenevr we allocate memory dynamically 


// delete ptrA;

Student A(1,12,"Ranu",5,7.8,"Menu");

// A.gfChatting(); now we cannot acces this function as its access specifier is set on private 


A.sleep();
A.getAge(10);




return 0;
}
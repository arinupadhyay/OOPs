#include <iostream>

using namespace std;

// class Add{
//     public:
//     // adding 2 no's
//     int sum(int x, int y){
//         return x+y;
//     }

//     // adding 3 no's
//     int sum(int x,int y, int z){
//         return x+y+z;
//     }

//     // double add
//     double sum(double x,double y, double z){
//         return x+y+z;
//     }
// };


class Complex{
    public:
    int real;
    int img;
    Complex( ){
        real=img=-1;
    }

    Complex(int r, int i):real(r), img(i){};

    void print(){
        printf("[%d + i%d]", this->real,this->img);
    }

    // syntax for operator 
    // return type operator <operator> (arguments ){
    // mlkdm
    // return<>
    // }

    Complex operator+(const Complex &B)
    {
        // this -> A instance 
        Complex temp;
        temp.real = this->real; + B.real;
        temp.img = this->img; + B.img;
        return temp;

    }


       Complex operator-(const Complex &B)
    {
        // this -> A instance 
        Complex temp;
        temp.real = this->real; - B.real;
        temp.img = this->img; - B.img;
        return temp;

    }


    bool operator==(const Complex &B)
    {
        // this -> A instance 
        // Complex temp;
        // temp.real = this->real; + B.real;
        // temp.img = this->img; + B.img;
        // return temp;

        return (this->real= B.real) &&  (this->img== B.img);

    }
    
};




 
int main(){

    // Add opt;

    // cout<<opt.sum(10,20)<<endl;;
    // cout<<opt.sum(20,10,30)<<endl;;
    // cout<<opt.sum(10.2,49.5,44.4)<<endl;;

    Complex A(3,3);
    A.print();
    Complex B(2,3);
    B.print();

    // Complex C = A+B;
    // C.print();

    // Complex D = A - B;
    // D.print();

    bool a = A == B;
    cout<< a << endl;

   

    return 0;
}
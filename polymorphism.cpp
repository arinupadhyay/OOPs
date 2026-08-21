#include <iostream>

using namespace std;

class Add{
    public:
    // adding 2 no's
    int sum(int x, int y){
        return x+y;
    }

    // adding 3 no's
    int sum(int x,int y, int z){
        return x+y+z;
    }

    // double add
    double sum(double x,double y, double z){
        return x+y+z;
    }
};





int main(){

    Add opt;

    cout<<opt.sum(10,20)<<endl;;
    cout<<opt.sum(20,10,30)<<endl;;
    cout<<opt.sum(10.2,49.5,44.4)<<endl;;


    return 0;
}
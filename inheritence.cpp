#include <iostream>
using namespace std;


class Vehicle{

    private:
     string name;
public:
   
    string model;
    int noOfTyres;

    string getName(){
        return this->name;
    }

    Vehicle(string _name, string _model, int _noOfTyres){

        cout<<"I am inside a car ctor"<<endl;
        this->name= _name;
        this->model= _model;
        this->noOfTyres = _noOfTyres;


    }


public:
void start_engine(){
cout<<"engine is strting "<<name<<" "<< endl;
}

void stop_engine(){

    cout<<"engine is stopping"<<name<<" "<< endl;

}


};

 //mode in which we want to inherit we hhave oto mention 

 class Car : public Vehicle 
 {
    public:
    int noOfDoors;
string transmissionType;


Car(string _name,string _model,int _noOfTyres,int _noOfDoors,string _transmissionType):  Vehicle(_name,_model,_noOfTyres)
{
    {
    this->noOfDoors = _noOfDoors;
    this->transmissionType= _transmissionType;

}

}

void AC(){
    cout<<"AC has started of  "<< getName() <<" "<< endl;

}


void engine_stop(){
    cout<<"engine of "<<getName()<<" "<<"has stopped"<< " "<< endl;

}

 };







int main(){

Car A("Maruti800","LXI",4,4,"Manual");
A.start_engine();
A.AC();
A.engine_stop();

    return 0;
}
 
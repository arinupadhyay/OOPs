#include <iostream>

using namespace std;

class BankAccount{

    protected:
    string accountNumber;
    string accountHolderName;
    float initialBalance;

    public:

    BankAccount(string _accountNumber, string _accountHolderName, float _initialBalance){
        this->accountNumber=_accountNumber;
        this->accountHolderName=_accountHolderName;
        this->initialBalance=_initialBalance;

         void deposit(double amount){
        if(amount>0){
            initialBalance= initialBalance+amount;
        }
    }

    }

   
    void withdraw(double amount){
        if(amount>0 && initialBalance >=amount){
            initialBalance = initialBalance - amount;
            cout<<"Balance remaining \t"<<initialBalance<<endl;


        }else{
            cout<<"Insuffiecient balance "<<endl;
        }
    }

    void displayDetails(){
        // prints basic account info 

        cout<<"Account Number:\t"<<accountNumber;
        cout<<"Account holder name:\t"<<accountHolderName;
        cout<<"Current balance:\t"<<initialBalance;
    }





};


class SavingsAccount:  public BankAccount
{
    // unique attributes 
private :
double intrestRate;

public:



};


class CheckingAccount: public BankAccount
{
    // unique attributes 
    private:
    float overdraftLimit;
};





















int main(){



    return 0;
}
#include <iostream>
#include <string>
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
    }

         void deposit(double amount){
        if(amount > 0){
            initialBalance= initialBalance+amount;
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

SavingsAccount(string _accountNumber, string _accountHolderName, float _initialBalance, double _intrestRate ) : BankAccount(_accountNumber,_accountHolderName,_initialBalance)
{
    this->intrestRate= _intrestRate;
}

void calculateIntrest(){
    double interest = initialBalance * (intrestRate / 100);
        initialBalance += interest;
        cout << "Interest addedddddd!: " << interest << " | New balanceeeeeeeee!: " << initialBalance << endl;

}




};


class CheckingAccount: public BankAccount
{
    // unique attributes 
    private:
    float overdraftLimit;

    public:
    CheckingAccount(string _accountNumber, string _accountHolderName, float _initialBalance, float _overdraftLimit): BankAccount(_accountNumber,_accountHolderName,_initialBalance){
        this->overdraftLimit=_overdraftLimit;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && (initialBalance + overdraftLimit) >= amount)
        {
            initialBalance -= amount;
            cout << "Withdrawal successful. Balance remaining: " << initialBalance << endl;
        }
        else
        {
            cout << "Exceeded overdraft limit!" << endl;
        }
    }
};





















int main(){

  SavingsAccount acc1("AP25110010450","Arin Upadhyay",20000.0,12.0);
  acc1.calculateIntrest();
  acc1.deposit(5000);
  acc1.withdraw(2500);
  acc1.displayDetails();






    return 0;
}

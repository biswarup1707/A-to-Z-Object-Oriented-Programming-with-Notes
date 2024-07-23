#include<bits/stdc++.h>
using namespace std;

class Customer{
    string name;
    int balance;
    int account_number;
    public:
        Customer(string name, int balance, int account_number){
            this->name=name;
            this ->account_number=account_number;
            this ->balance=balance;
        }
    // deposit

        void deposit(int amount){
            if(amount>0){
                cout<<amount<<" rs is credited Successfully"<<endl;
                balance+=amount;
                cout<<"Current Acmount is:"<<balance;
            }
            else{
                throw "Your amount should be greater then zero";
            }
        }  

    //withdraw
       void withdraw(int amount){
        if(amount>0 && amount<=balance){
            cout<<amount<<" rs is debited Successfully"<<endl;
            balance-=amount;;
            cout<<"Current Acmount is:"<<balance<<endl;
        }
        else if(amount<0){
            throw "Your amount should be greater then zero";  
        }
        else{
            throw "Insafficient Balance"; 
        }
       }
};

int main()
{
     Customer c1("Biswarup",5000,897989);
     try{
        c1.deposit(100);
        c1.withdraw(6000);
        c1.deposit(1200);
     }
     catch(const char *e){
        cout<<"Exception occured:"<<e<<endl;
     }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class Customer{
    
    string name;
    int balance;
    int account_number;
    public:
        Customer(string name, int balance, int account_number){
            this ->name = name;
            this ->balance = balance;
            this ->account_number=account_number;
        }

        //deposite
        void deposite(int amount){
            if(amount>0){
                balance+=amount;
                cout<<amount <<"Successfully deposite"<<endl;
                cout<<" Current Balace is:"<<balance;
            }
            else{
                cout<<"Invalid amount"<<endl;
            }
        }
        //withdrw
        void withdraw(int amount){
            if(amount>0 && amount<=balance){
                balance-=amount;
                cout<<" Balance withdraw susscessfully "<<endl;
                cout<<" Current balance is: "<<balance;
            }
            else if(amount<0){
                cout<<"Invalid amount"<<endl;
            }
            else{
                cout<<"Insufficient balance"<<endl;
            }
        }
        void info(){
            cout<<"name:"<<name<<endl;
            cout<<"balance:"<<balance<<endl;
            cout<<"Account Number:"<<account_number<<endl;

        }
};
int main()
{      
    Customer c1("Biswarup",5000,200342);
    int amount;
    cout<<"Enter Amount you can to deposit"<<endl;
    cin>>amount;
    c1.deposite(amount);


    // c1.deposite(89);
    // c1.withdraw(89);
     
    return 0;
}


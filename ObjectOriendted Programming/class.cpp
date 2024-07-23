#include<bits/stdc++.h>
using namespace std;

class Teacher{
    //property
    private:
        double salary;
    public:
        string name;
        string dept;
        string subject;

         //Parameterized constructor called
        Teacher(string name, string dept, string subject,double salary){
           this->name=name;
           this->dept=dept;
           this->subject=subject;
           this->salary=salary;  
        }
        //copy constructor
        Teacher(Teacher &orgObj){
            this->name=orgObj.name;
            this->dept=orgObj.dept;
            this->subject=orgObj.subject;
            this->salary=orgObj.salary;
        }
        
        //setter (here we use setSalary func to set salary)
        void setSalary( double s){
            salary=s;
        }
        //getter (here we return salary)
        double getSalary(){
            return salary;
        }
       
    //methods
    void changedept(string newDept){
        dept=newDept;
    }

    void getinfo(){
        cout<<"salary:"<<salary<<endl;
        cout<<"Department:"<<dept<<endl;
    }    

};

int main()
{      
   
    Teacher t1("Biswa","ComputerScience","OOP",25000);
    

    // cout<<"Name Of The Teacher is:"<<t1.name<<endl;
    // cout<<"Name of the Dept is:"<<t1.dept<<endl;
    // cout<<"Name of The Subject of the Teacher:"<<t1.subject<<endl;
    
    // cout<<"The Salary of the Teacher is:"<<t1.getSalary();
    cout<<"Salary-->"<<t1.getSalary()<<endl;
    t1.getinfo();
    Teacher t2(t1);
    cout<< t2.name;
    cout<<t2.getSalary();

    return 0;
}
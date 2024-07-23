#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
        string name;
        int roll;

    Student(){
        cout<<"Non-Parameterized Constructor"<<endl;
    }   
     Student(string name, int roll){
        this->name=name;
        this->roll=roll;
        cout<<"Parameterized Constructor"<<endl;
    } 

};

int main()
{     
    Student s1("Biswa",12);

    //As here we have passed the parameter thats why Constructor
    //with Parameterized one will be called
    

    return 0;
}
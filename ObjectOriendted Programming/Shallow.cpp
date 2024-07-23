#include<bits/stdc++.h>
using namespace std;

class Student{
    public: 
        string name;
        double* CGPAptr;

    Student(string name,double CGPA){
        this->name=name;
        CGPAptr= new double;
        *CGPAptr=CGPA;   
    }
    //copy constructure manually
    Student(Student &s){
        this->name=s.name;
        this->CGPAptr=s.CGPAptr;
    }

    void getInfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"CGPA:"<<*CGPAptr<<endl;   
    }


};

int main()
{
    Student s1("Biswarup Acharjya",9.32);
    s1.getInfo();
    Student s2(s1);
    s2.name="Tom";
    *(s2.CGPAptr)=8.77;
    s2.getInfo();

    s1.getInfo();
    
    return 0;
}
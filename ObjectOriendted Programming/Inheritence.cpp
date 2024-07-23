#include<bits/stdc++.h>
using namespace std;

class Person{
    public: 
        int age;
        string name;    
    Person(string name,int age){
        this->name=name;
        this->age=age;

        // cout<<"I am from Base Class"<<endl;
    }
    ~Person(){
        cout<<"I am from Base class"<<endl;
    }        

};
class Student: public Person{
    public:
        int roll;

    Student(string name,int age,int roll): Person(name, age){
        this->roll=roll;
        cout<<"I am from Derived Class"<<endl;
    }
    
    ~Student(){
        cout<<"I am from Derived Class"<<endl;
    }    

    void getinfo(){
        cout<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"AGE:"<<age;
    }
};    

int main()
{   

    cout<<"Hi";
    Student s1("Biswarup",21,200516);
    // s1.age=21;
    // s1.name="Biswarup";
    // s1.roll=2005;

    // cout<<s1.age;

    s1.getinfo();

    return 0;
}
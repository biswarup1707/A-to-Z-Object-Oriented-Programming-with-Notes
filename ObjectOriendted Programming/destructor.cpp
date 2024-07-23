#include<bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        int roll;

    // contructor 
    Student(){
        cout<<"Constructor is called"<<endl;
    }
    ~Student(){
        cout<<"Destructor is called"<<endl;
    }

};

int main()
{
    Student s1;  // statically alocated for this destructor automatically called;

    Student *s2 = new Student; // dynamatically alocated for this destructor not automatically called; use delect word to free the memory 
    delete s2;


    return 0;
}
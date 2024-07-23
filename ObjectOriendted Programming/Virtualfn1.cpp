#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
    virtual void speak(){
        cout<<"Hu-hu"<<endl;
    }
};
class Dog:public Animal{
    public:
        void speak(){
            cout<<"Barking"<<endl;
        }
};
class Cat:public Animal{
    public:
        void speak(){
            cout<<"Meowing"<<endl;
        }
};



int main(){
    Animal *p;
    p = new Animal();
    p->speak();

    return 0;
}
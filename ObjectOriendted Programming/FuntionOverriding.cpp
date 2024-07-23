#include<bits/stdc++.h>
using namespace std;

//creating a parent

class Animal{
    public: 
        void sound(){
            cout<<"Speaking"<<endl;
        }
};

class Dog: public Animal{
    public:
        void sound(){
            cout<<"Barking"<<endl;
        }
};
class Cat:public Animal{
    public:
        void sound(){
            cout<<"Meowing"<<endl;
        }
};


int main()
{
    Dog rocky;
    rocky.sound();
    Cat tom;
    tom.sound();
     
    return 0;
}



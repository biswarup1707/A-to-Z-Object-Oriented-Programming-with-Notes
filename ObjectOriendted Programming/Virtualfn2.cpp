#include<bits/stdc++.h>
using namespace std;

class Animal{
    public: 
    virtual void speak(){
            cout<<"Hu-HU"<<endl;     
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
    vector<Animal*>animals;
    animals.push_back(new Dog());
    animals.push_back(new Cat());
    animals.push_back(new Animal());
    animals.push_back(new Dog());
    animals.push_back(new Cat());

    int n=animals.size();
    
    for(int i=0; i<n;i++){
        p=animals[i];
        p->speak();
    }


    return 0;
}
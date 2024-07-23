#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    static int x;
    static int timeToComplete;

    static int random(){
        return timeToComplete;
    }
    void incrementX(){
        x=x+1;
    }    
    
};
int A::x=10;

int A::timeToComplete=20051686;

int main(){

    // cout<<A::x<<endl; //static variable (no need to create an obj as it belongs to class itself);
    cout<<A ::timeToComplete<<endl;
    cout<<A::random()<<endl;
    A obj1;
    A obj2;
    obj1.x=100;
    obj2.x=200;
    cout<<obj1.x<<endl;
    obj1.incrementX();
    cout<<obj1.x<<endl;

    
    cout<<obj2.x<<endl;
    obj2.incrementX();
    cout<<obj2.x<<endl;


    return 0;
}
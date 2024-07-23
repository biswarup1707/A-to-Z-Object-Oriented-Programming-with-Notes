#include<bits/stdc++.h>
using namespace std;
class Print{
    public:
    void show(){
        cout<<"Nothing is Here"<<endl;
    }
    void show(char ch){
        cout<<"Character is here"<<ch<<endl;
    }
    void show(int roll){
        cout<<"Roll is here"<<roll<<endl;
    }

};

int main()
{
    Print p;
    p.show(90);
    p.show();
    p.show('X');
     
    return 0;
}
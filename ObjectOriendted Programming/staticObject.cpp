#include<bits/stdc++.h>
using namespace std;
class ABC{
    public:
        ABC(){
            cout<<"COnstructor Called"<<endl;
        }
        ~ABC(){
            cout<<"Destructor Called"<<endl;
        }

};


int main()
{   
    if(true){
    //    ABC obj; 
       static ABC obj;
    }
    cout<<"End of the main Function"<<endl;

     
    return 0;
}
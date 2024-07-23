#include<bits/stdc++.h>
using namespace std;

class Complex{
    int real;
    int imag;

    public:
        Complex(int real , int imag){
            this->real=real;
            this->imag=imag;
        }
        void print(){
            cout<<real<<" +i"<<imag<<endl;
        }
        Complex(){
            
        }
        Complex operator + (Complex &c){
            Complex ans;
            ans.real=real+c.real;
            ans.imag=imag+c.imag;
            return ans;
        }



};
int main()
{   
    Complex c1(2,3);
    Complex c2(3,4);

    Complex c3=c1+c2;

    c3.print();
     
    return 0;
}
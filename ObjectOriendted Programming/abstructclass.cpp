#include<bits/stdc++.h>
using namespace std;
class Shape{
    public:
        virtual void draw()=0;
};

class Circle:public Shape{
    public:
        void draw(){
            cout<<"Draw a Circle"<<endl;
        }
};
class Rectangle:public Shape{
    public:
        void draw(){
            cout<<"Draw a Rectangle"<<endl;
        }
};
class Square:public Shape{
    public:
        void draw(){
            cout<<"Draw a Squre"<<endl;
        }
};


int main(){
    Shape *p ;
    vector<Shape *>shapes;
    shapes.push_back(new Circle());
    shapes.push_back(new Rectangle());
    shapes.push_back(new Square());
    shapes.push_back(new Circle());
    shapes.push_back(new Rectangle());
    shapes.push_back(new Square());
    for(int i=0;i<shapes.size();i++){
        p=shapes[i];
        p->draw();
    }


    return 0;
}
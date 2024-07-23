// #include<bits/stdc++.h>
// using namespace std;

// class Calculate{
// public:
//     int area(int side){
//         return side * side;
//     }

//     int area(int length, int breadth){
//         return length * breadth;
//     }

//     float area(float radius){
//         return 3.14159 * radius * radius;
//     }

// };

// int main()
// {      
//     Calculate c;
    

//     cout << "Area of a rectangle with sides 5 and 6: " << c.area(5, 6) << endl;
//     // cout << "Area of a circle with radius 3.4: " << c.area(3.4) << endl;
//     cout << "Area of a square with side 5: " << c.area(5) << endl;

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

class calculate{
    public:
        int add(int a,int b){
            return a + b;
        }
        int add(int a,int b,int c){
            return a + b+ c;
        }
        double add(double a,double b){
            return a + b;
        }

};

int main()
{
    calculate sum;
    cout<<sum.add(3,4);
    cout<<sum.add(3,4,5);
    cout<<sum.add(3.0,4.1);

    return 0;
}
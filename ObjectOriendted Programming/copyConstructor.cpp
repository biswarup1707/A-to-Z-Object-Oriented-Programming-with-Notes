#include <bits/stdc++.h>

using namespace std;
class Student
{
public:
    string name;
    int roll;
    double cgpa;

    Student(string name, int roll, double cgpa)
    {
        this->name = name;
        this->roll = roll;
        this->cgpa = cgpa;
    }
    void getInfo()
    {
        cout << "Name:" << name << endl;
        cout << "Roll:" << roll << endl;
        cout << "CGPA:" << cgpa << endl;
    }
};

int main()
{

    Student s1("Biswarup Acharjya", 20051686, 8.77);
    s1.getInfo();

    cout << "Shallow copy" << endl;

    Student s2(s1);
    s2.getInfo();
    s2.name = "Aryan";
    s2.getInfo();
    s1.getInfo();

    return 0;
}
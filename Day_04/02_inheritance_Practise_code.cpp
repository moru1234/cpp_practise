#include<iostream>
using namespace std;

class Base
{
public:
int num1;

Base()
{
    this->num1=10;
    cout<<"Inside Base constructor"<<endl;
}
void printNum1()
{
    cout<<"The value of Num1 is base class is "<<this->num1<<endl;
}
};

class Derived:public Base
{
public:
int num2;

Derived()
{
    this->num2=20;
    cout<<"Inside derived constructor"<<endl;
}

void printNum2()
{
    cout<<"The value of Num1 is base class is "<<this->num2<<endl;
}

};

int main()
{
    Derived d;
    d.printNum1();
    d.printNum2();
}
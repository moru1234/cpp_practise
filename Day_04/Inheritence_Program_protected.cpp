#include<iostream>
using namespace std;
class B
{
protected:
int num1;
public:
    B()
    {
        this->num1 = 10;
    }
    
    void PrintDisplayB()
    {
        cout<<"The value of A is: "<<this->num1<<endl;
    }
};

class C
{
protected:
int num2;
public:

    C()
    {
        this->num2 = 20;
    }
    
    void PrintDisplayC()
    {
        cout<<"The value of A is: "<<this->num2<<endl;
    }
    
};
class D: public C, public B
{
public:
int num3;

    D()
    {
        this->num3 = 30;
    }
    
    void PrintDisplayD()
    {
        cout<<"The value of num3 is: "<<this->num3<<endl;
        cout<<"The value of num2 is: "<<this->num2<<endl;
        cout<<"The value of num1 is: "<<this->num1<<endl;
    }
    
};



int main()
{
     D Derived;
    Derived.PrintDisplayD();
}
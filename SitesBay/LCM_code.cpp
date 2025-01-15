#include<iostream>
using namespace std;

int LCMcalculator(int a, int b)
{
    int m = a; int n =b;
    while(m!=n)
    {
        if(m<n)
        {
            m=m+a;
        }
        else
        {
            n=n+b;
        }
    }

    return m;
}

int main()
{
int Num1, Num2;
int (*funcPtrLCMcalculator)(int, int);
cout<<"Get two numbers as input"<<endl;
cin>>Num1>>Num2;
funcPtrLCMcalculator=LCMcalculator;
cout<<"The LCM of numbers is: "<<funcPtrLCMcalculator(Num1, Num2)<<endl;
}
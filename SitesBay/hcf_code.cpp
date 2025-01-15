#include<iostream>
using namespace std;


int HCFOfNumber(int a, int b)
{
int m=a;int n=b;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        if (n>m)
        {
            n=n-m;
        }
    }
    return m;
}
int main()
{
    int Num1, Num2;
    int (*funcPtrHCFOfNumber) (int, int);
    funcPtrHCFOfNumber = HCFOfNumber;

    cout<<"Enter two numbers"<<endl;
    cin>>Num1>>Num2;
    cout<<"The HCF of entered two number is: "<<   funcPtrHCFOfNumber(Num1, Num2)<<endl;
}

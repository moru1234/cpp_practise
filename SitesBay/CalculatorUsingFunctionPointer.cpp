#include<iostream>
using namespace std;

int add(int a, int b)
{
    return a+b;
}

int sub(int a, int b)
{
    return a-b;
}

int multiply(int a, int b)
{
    return a*b;
}

int division(int a, int b)
{
    return a/b;
}

int main()
{
char OperationType;int Num1,Num2;
    int (*FuncPtrOperation) (int, int);
    cout<<"Enter"<<endl;
cin>>OperationType>>Num1>>Num2;

switch(OperationType)
{
    case '+':
        FuncPtrOperation= add;
        break;
    case '-':
        FuncPtrOperation= sub;
        break;
    case '*':
        FuncPtrOperation= multiply;
        break;                
    case '/':
        FuncPtrOperation= division;
        break;  
    default:
        cout<<"Invalid operator"<<endl;

}
cout<<"The result is: "<<FuncPtrOperation(Num1, Num2)<<endl;
}
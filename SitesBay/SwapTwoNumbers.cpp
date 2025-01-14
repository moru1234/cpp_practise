#include<iostream>
using namespace std;

void swapNumber(int &num1, int &num2)
{
    int temp = num1;
    num1=num2;
    num2=temp;
}
void swapNumberWithTwoNumber(int &num1, int &num2)//10 20
{
    num1 =num1+num2;//10+20 =30
    num2=num1 - num2;//30-20 =10 ;;;;Num1 is swapped to num2
    num1= num1- num2;//30-10 =20 ;; Num2 is swapped to num1
}

int main()
{
    int inputNum1,inputNum2;
    cout<<"Enter the numbers which you want to swap"<<endl;
    cin>>inputNum1;
    cin>>inputNum2;
    swapNumber(inputNum1,inputNum2);
    cout<<"The Swapped numbers are: "<<inputNum1<<":"<<inputNum2<<endl;

    swapNumberWithTwoNumber(inputNum1,inputNum2);
    cout<<"The Swapped numbers are: "<<inputNum1<<":"<<inputNum2<<endl;
}
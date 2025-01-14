#include<iostream>
using namespace std;

int NumberOfDigits(int n)
{
    int i=0;
    while((n)!=0)
    {
        i++;
        n=n/10;
    }
    return i;
}

int main()
{
    int (*FuncPtrDigitOfNumber)(int);
    int Num;
    cout<<"Enter the number to be reversed."<<endl;
    cin>>Num;

    FuncPtrDigitOfNumber = NumberOfDigits;
    cout<<"The number of digits from this number are :"<<FuncPtrDigitOfNumber(Num)<<endl;

}
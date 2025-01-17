#include<iostream>
using namespace std;


int sumCalculator(int n)
{
    int sum =0;
    while (n!=0)
    {
        sum = sum + (n%10);
        n=n/10;
    }

    return sum;
}
int main()
{
    int Num;
    cout<<"Enter number whoes digits sum you want to calculate: "<<endl;
    cin>>Num;

    int (*FuncPtr)(int);
    FuncPtr = sumCalculator;
    cout<<"The sum of digits is: "<<FuncPtr(Num)<<endl;

}

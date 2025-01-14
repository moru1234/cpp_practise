#include<iostream>
using namespace std;

int factorial(int num)
{
    if (num==0)
    {
        return 1;
    }
    else
        return (num*factorial((num-1)));
}


int main()
{
    int Num,factNum;
    cout<<"Enter the number to calculate its recursion"<<endl;
    cin>>Num;

    factNum =factorial(Num);
    cout<<"The factorial of number is "<<factNum<<endl;
}
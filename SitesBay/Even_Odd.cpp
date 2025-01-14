#include<iostream>
using namespace std;
void CheckInputNumberEvenOrOdd(int &num)
{
    if ((num%2)== 0)
    {
        cout<<num<<": This number is even "<<endl;
    }
    else 
    {
        cout<<num<<": This number is odd"<<endl;
    }
}
int main()
{
    int inputNum;
    cout<<"Enter the number to check for Even or Odd"<<endl;
    cin>>inputNum;
    CheckInputNumberEvenOrOdd(inputNum);
}
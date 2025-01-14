#include<iostream>
using namespace std;

void PrimeNumberChecker(int &Num)
{
    int CheckPrime=0;
    for (int i =2; i<Num;i++)
    {
        if ((Num%i)==0)
        {
            CheckPrime++;

        }
    }
    if(CheckPrime >=1)
    {
        cout<<Num<<": Entered number is not prime number"<<endl; 
    }
    else{
         cout<<Num<<": This number is prime number"<<endl; 
    }
}
int main()
{
    int NumberToCheckPrimeOrNot;
    cout<<"Enter the number which to check for prime number"<<endl;
    cin>>NumberToCheckPrimeOrNot;
    PrimeNumberChecker(NumberToCheckPrimeOrNot);

    
}

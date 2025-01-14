#include<iostream>
using namespace std;

int NumReverseFunc(int &n)//123
{
    int reverse=0;
    while(n!=0)
    {
        reverse =reverse*10 +(n%10);//3 , 32
        n=n/10;//12 1
    }    

    return reverse;
}

int main()
{
    int Num;
    cout<<"Enter the number to reverse"<<endl;
    cin>>Num;
    int numRevesed =NumReverseFunc(Num);
    cout<<"The reversed number is: "<<numRevesed<<endl;
}

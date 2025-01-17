#include<iostream>
using namespace std;

int BuzzFizzFunc()
{   
    int n=100;
    while(n!=0)
    {
        
        if ((n%3)==0)
        {
            cout<<"number is: "<<"Buzz"<<endl;
        }
        else if ((n%5)==0)
        {
            cout<<"number is: "<<"Fizz"<<endl;
        }
        else if (((n%5)==0)&&((n%5)==0))
        {
            cout<<"number is: "<<"BuzzFizz"<<endl;
        }
        else 
        {
            cout<<"number is: "<<n<<endl;
        }
        n--;
    }
    return 0;
}
int main()
{
    int (*funcPtrBuzzFizz) ();
    funcPtrBuzzFizz = BuzzFizzFunc;
    funcPtrBuzzFizz();
    return 0;
}
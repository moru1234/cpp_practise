#include<iostream>
using namespace std;
void swapByValue(int a, int b)
{
    int temp;
    temp = b;
    b=a;
    a =temp;
    cout<<"The value after swapping inside function is "<<a<<" : "<<b<<endl;
}

void swapByReference(int &a, int &b)
{
    int temp;
    temp = b;
    b=a;
    a =temp;
    cout<<"The value after swapping inside function is "<<a<<" : "<<b<<endl;
}
int main()
{
    int x=10,y=20;
    cout<<"The value befor swapping is "<<x<<" : "<<y<<endl;
    swapByValue(x,y);
    cout<<"The value of after swap byvalue swapping is "<<x<<": "<<y<<endl;

    x=10,y=20;
    cout<<"The value befor swapping is "<<x<<" : "<<y<<endl;
    swapByReference(x,y);
    cout<<"The value of after by swap byReference swapping is "<<x<<": "<<y<<endl;
}



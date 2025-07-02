#include<iostream>
using namespace std;

int mul(int =1, int =1, int =1);
int main()
{
    cout<<mul(10, 20)<<endl;
    cout<<mul(5)<<endl;
    cout<<mul(1)<<endl;
}
int mul(int a, int b, int c)
{
    return a*b*c;
}
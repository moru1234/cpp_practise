#include<iostream>
using namespace std;
int add(int, int , int =0, int =0,int =0);
int main()
{
    cout<<add(10,20)<<endl;
    cout<<add(10,20,30)<<endl;
    cout<<add(10, 20, 30, 40)<<endl;
}
int add(int a, int b , int c, int d, int e)
{
    return a+b+c+d+e;
}
#include<iostream>
#include"abc.h"
using namespace std;

ABC::ABC()
{
    cout<<"InsideDefault construct"<<endl;
    cout<<"Enter the data"<<endl;
    cin>>data1>>data2;
}
void ABC::print()
{
    cout<<"The value of data1 is: "<<data1<<endl;
    cout<<"The value of data2 is "<<data2<<endl;
}

void ABC::add()
{
    cout<<"The sum of data1 and data2 is "<<data1+data2<<endl;
}

void ABC::sub()
{
    cout<<"The difference of data1 and data2 is "<<data1-data2<<endl;
 
}

void ABC::mul()
{
    cout<<"The product of data1 and data is"<<data1*data2<<endl;
}
#include<iostream>
using namespace std;
class ABC
{
int data1, data2;
public:
void print()
{
    cout<<"The data is data1: "<<this->data1<<" and data2 is "<<this->data2<<endl;
}

void inc()
{
    ++data1;++data2;
}

ABC()
{
    cout<<"Enter data 1 and data2"<<endl;
    cin>>data1>>data2;
}
};

int main()
{
    ABC obj1;
    obj1.print();
    obj1.inc();
    obj1.print();
}
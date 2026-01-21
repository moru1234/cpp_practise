//shared pointer

//This pointer allows to share ownership of dynamically allowcated object.
// Shared pointer has reference counter
// This reference counter makes posibile That object is deletected when last shared ptr is detroyed.

//multiple instances shared same resource
//reference counter -> keeps track of shared_ptr instance that own the resouece
//use <memory> header to have shared pointer

#include<iostream>
#include<memory>
using namespace std;

int main()
{
    std::shared_ptr<int> ptr (new int(20));
    
    std::shared_ptr<int> ptr2(ptr);
    
    cout<<"The value of ptr and ptr2 is "<<*ptr<<" "<<*ptr2<<endl;
    
    cout<<"ptr ref count"<<ptr.use_count()<<"Ref count of ptr2 is "<<ptr2.use_count()<<endl;
    ptr.reset();
    cout<<"ptr ref count"<<ptr.use_count()<<"Ref count of ptr2 is "<<ptr2.use_count()<<endl;
    
}

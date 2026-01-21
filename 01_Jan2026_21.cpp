//Smart pointers

//prevent memory leaks
//aviod dangling pointer

//3 main smart pointers -> unique, shared, weak
//Unique -> unique pointer will own a resource at a time.
//Automatic cleanup -> no manual delete would require
//Move sematics -> no copying allowed, but ownership can be transfered.
//To use smart pointers include memory header

#include<iostream>
#include<memory>
using namespace std;

int main()
{
 std::unique_ptr<int> ptr(new int(30));
 cout<<"The value of ptr is "<<*(ptr.get())<<" address is "<<ptr.get()<<endl;
 ptr.release();
 ptr.reset(new int(1000));
 cout<<"The value of ptr after release is "<<*(ptr.get())<<" address is "<<ptr.get()<<endl;
}

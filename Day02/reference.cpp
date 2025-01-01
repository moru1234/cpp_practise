//Reference is another name for an already existing variable.
//ref and x refer to the same memory. Any change to ref is reflected in x and vice versa.
#include<iostream>
using namespace std;
int main()
{
    int x=10;
    int &R = x;

    cout<<"The original value of x and &R is :"<<x<<","<<R<<endl;
    R = 20;
    cout<<"The original value of x and &R is :"<<x<<","<<R<<endl;
}
// ___________     Reference_____________      Pointers
// Syntax	        int& ref = var;         	int* ptr = &var;
// Nullability	    Cannot be null.	            Can be null (int* ptr = nullptr;).
// Reassignment	    Cannot be reassigned.	    Can point to another variable.
// Initialization	Must be initialized.	    Can be declared uninitialized.
// Use Case	        Simplifies variable aliasing.	Explicit memory manipulation.
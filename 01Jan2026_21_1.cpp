//Example 2 -> use of std::move in unique pointer to copying resourse.
#include<iostream>
#include<memory>

using namespace std;

int main()
{
    std::unique_ptr<int> ptr(new int(30));
    
    std::unique_ptr<int> ptr2(std::move(ptr));
    
    cout<<"The value of ptr2 is"<<*ptr2<<endl;
    if(!ptr)
    {
        cout<<"ptr is now nullptr"<<endl;
    }
}

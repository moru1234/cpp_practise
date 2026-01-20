//C++ 20 -> Ranges Library

#include<iostream>
#include<vector>
#include<ranges>

using namespace std;

int main()
{
    std::vector<int> vec = {1, 2,3,4,5};
    if (std::ranges::range<decltype(vec)>)// can iterate over begin() and end()
    {
        cout<<"vec is range"<<endl;
    }
    
    if( std::ranges::sized_range<decltype(vec)>)//provides size method
    {
        cout<<"Vec is sized range"<<endl;
    }
    
    if(std::ranges::view<decltype(vec)>)// view is non - owning composed with other view
    {
        cout<<"Vec is view type"<<endl;
    }
}

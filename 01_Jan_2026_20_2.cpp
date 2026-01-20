//Range Algorithms
//std::ranges::sort ->sort ranges
//std::ranges::find -> find element in a ranges
//std::ranges::for_each -> Applies function to each element in a range
//std::ranges::count => count the occurance of value in ranges

#include<iostream>
#include<vector>
#include<ranges>
#include<algorithm>

using namespace std;
int main()
{
    std::vector<int> vec = {1,2,3,4,5};
    std::ranges::sort(vec);
    
    auto it = std::ranges::find(vec, 3);// to find 3
    
    if(it !=vec.end())
    {
        cout<<"Found"<<*it<<endl;
    }
    
    std::ranges::for_each(vec, [](int x){cout<<x<<endl;}); //for each element
}

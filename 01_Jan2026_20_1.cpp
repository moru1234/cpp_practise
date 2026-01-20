//Range Adapters -> These utilities allow to transform, filter and compose ranges.
//filter
//transform
//take
//reverse
//take
//drop

#include<iostream>
#include<vector>
#include<ranges>
using namespace std;
int main()
{
    std::vector<int> vec {1,2, 3,4,5};
    auto view = vec | std::views::filter([](int x){ return (x%2 ==0);})//2, 4
                    | std::views::transform([](int x){return x*x;});//4, 16
                    
    for(int v: view)
    {
        cout<<"value is "<<v<<endl;
    }
}

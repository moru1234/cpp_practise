//Sorting of vec 
#include<iostream>
#include<vector>
#include<algorithm> //for std::sort

using namespace std;

int main()
{
    std::vector<int> numbers{6,8, 1,2,3,4,5};
    
    std::sort(numbers.begin(), numbers.end());
    for(auto v : numbers)
    {
        cout<<" value is "<<v<<endl;
    }
}

#include <iostream>
#include <forward_list>

using namespace std;

int main()
{
    std::forward_list<int> list = {1, 2, 3, 4, 5};
    auto it = list.begin();

    while (it != list.end())
    {
        *it *= 2;
        ++it;
    }

    for (auto &value : list)
    {
        cout << "the value is " << value << endl;
    }

    return 0;
}
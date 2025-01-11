#include<iostream>

namespace MyNameSpace
{
    int myNameNum;
    void MyNameSpaceFunc(void)
    {
        std::cout<<"This is function from MyNameSpace"<<std::endl;
    }
}

int main()
{
    using namespace MyNameSpace;
    MyNameSpaceFunc();
    std::cout<<"The value of myNameNum is "<<myNameNum<<std::endl;    
}
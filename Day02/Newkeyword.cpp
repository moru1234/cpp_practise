//new allocates memory from heap and returns a pointer 
//=>Dynamic memory allocation- size or number of objects are not known during compile time.
//delete - free the memory allocated by new
//e.g. int *ptr = new int

// #include<iostream>
// using namespace std;
// int main()
// {
//     int *ptr = new int(43);
    
//     cout<<"The value of int ptr is: "<<*ptr<<endl;
//     delete ptr;
// }

#include<iostream>
using namespace std;

class Box
{
private:
    int width;
public:
    Box(int w):width(w){}  
    void  showWidth()
    {
        cout<<"The width of this box is :"<<this->width<<endl;
    }
};

int main()
{
    Box *b = new Box(10);
    b->showWidth();

    delete b;
}
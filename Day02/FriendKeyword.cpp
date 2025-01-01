//friend keyword allows to non member function or another class to access private/proted members of class
//Friend can be function or class
//Friendship is not reciprocal means A=> friend -> but B is not necessary a friend.
//Friendship is not inherited.

// #include<iostream>
// using namespace std;

// class Box
// {
// private:
//     int width;

// public:
//     Box(int W):width(W){}

//     friend void PrintWidth(Box &b);
// };
// void PrintWidth(Box &b)
// {
//     cout<<"The width of the box is :"<<b.width<<endl;
// }

// int main()
// {
//     Box a(10);
//     PrintWidth(a);

// }


#include<iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(int len, int wid):length(len), width(wid){}

    friend class AreaCalcultor;
};

class AreaCalcultor
{
public:
    int Calculator(Rectangle &Rec)
    {
        return Rec.length*Rec.width;
    }
};

int main()
{
    Rectangle R1(10,20);
    AreaCalcultor calc;
  cout<<"The area of rectangle is: "<<calc.Calculator(R1)<<endl;

}
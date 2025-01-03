//Copy constructor - Used to create a new object or copy of existing object.
//E.g. friends book shelf 
//Default copy constructor = shallow copy   => Shallow obj2 =obj1
//Custom copy constructor = Deep copy   => Deep(const Deep &obj){data = new int (*obj.data)} Deep obj2 = obj1 => here it only modifies object 2


//Use of default copy constructor = Shallow copy
#include<iostream>
using namespace std;

class Rectangle
{
private:
int length, width;
public:
    Rectangle(int len, int w):length(len),width(w){}
    void showValues()
    {
        cout<<"The value of length is "<<this->length<<","<<this->width<<endl;
    }

    void ChangeLength(int len)
    {
        this->length = len;
    }
};


int main()
{
    Rectangle R1(10,5);
    Rectangle R2= R1;

    R1.showValues();
    R2.showValues();
    R2.ChangeLength(30);
    cout<<"____________________________________"<<endl;
    R1.showValues();
    R2.showValues();
}

//Use of custom copy constructor = deep copy

// #include<iostream>
// using namespace std;

// class Rectangle
// {
// private:
// int length, width;
// public:
//     Rectangle(int len, int wid):length(len),width(wid){}
//     Rectangle(const Rectangle &R)
//     {
        
//         this->length = R.length;
//         this->width = R.width;
//     }

//     void showDisplay()
//     {
//         cout<<"The values of rectangle are: "<<this->length<<":"<<this->width<<endl;
//     }

//     void ChangeLength(int l)
//     {
//         this->length = l;        
//     }

// };

// int main()
// {
//     Rectangle R1(10,5);
//     Rectangle R2 = R1;

//     R1.showDisplay();
//     R2.showDisplay();
//     cout<<"________________________________"<<endl;
//     R2.ChangeLength(30);
//     R1.showDisplay();
//     R2.showDisplay();
// }

// #include<iostream>
// using namespace std;
// class Rectangle
// {
// private:
// int *length, width;
// public:
//     Rectangle(int len, int wid)
//     {
//         length = new int;
//         *length = len;
//         width=wid;
//     }
//     Rectangle(const Rectangle &R)
//     {
//        length =new int;
//        *length  = *(R.length);
//        width=R.width;

//     }

//     void showDisplay()
//     {
//         cout<<"The values of rectangle are: "<<*length<<":"<<width<<endl;
//     }

//     void ChangeLength(int l)
//     {
//         *length = l;        
//     }
//         // Destructor to free dynamically allocated memory
//     ~Rectangle()
//     {
//         delete length;  // Free the dynamically allocated memory
//     }

// };

// int main()
// {
//     Rectangle R1(10,5);
//     Rectangle R2 = R1;

//     R1.showDisplay();
//     R2.showDisplay();
//     cout<<"________________________________"<<endl;
//     R2.ChangeLength(30);
//     R1.showDisplay();
//     R2.showDisplay();
// }
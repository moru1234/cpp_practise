// #include<iostream>
// using namespace std;

// class complex
// {
//     private:
//     int real,img;

//     public:
//     complex ():real(0), img(0){}
//     complex(int r, int i)
//     {
//         real =r;
//         img =i;
//     }

//     complex add(complex &c1, complex &c2)
//     {
//         complex result;
//         result.real =c1.real+c2.real;
//         result.img = c1.img +c2.img;
//         return result;
//     }

//     complex add(complex c1, complex c2,complex c3)
//     {
//         complex result;
//         result.real =c1.real+c2.real+c3.real;
//         result.img = c1.img +c2.img+ c3.img;
//         return result;
//     }

//     void DisplayComplex()
//     {
//         cout<<"The real part is: "<<this->real<<" imag is: "<<this->img<<endl;
//     }

// };

// int main()
// {
//     complex A1(10,20);
//     complex A2(30,30);
//     complex A3(10,10);

//     complex A4 =A3.add(A3,A2,A1);
//     A4.DisplayComplex();
// }

#include<iostream>
using namespace std;

class complex
{
    private:
    int real, img;

    public:
    complex(): real(0), img(0) {}

    complex(int r, int i)
    {
        real = r;
        img = i;
    }

    complex add(complex c1, complex c2)
    {
        complex result;
        result.real = c1.real + c2.real;
        result.img = c1.img + c2.img;
        return result;
    }

    complex add(complex c1, complex c2, complex c3)
    {
        complex result;
        result.real = c1.real + c2.real + c3.real;
        result.img = c1.img + c2.img + c3.img;
        return result;
    }

    void DisplayComplex()
    {
        cout << "The real part is: " << this->real << " imag is: " << this->img << endl;
    }
};

int main()
{
    complex A1(10, 20);
    complex A2(30, 30);
    complex A3(10, 10);

    complex A4 = A3.add(A3, A2, A1);
    A4.DisplayComplex();
}

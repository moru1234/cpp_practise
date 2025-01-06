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

    complex operator+(complex &c1)
    {
        complex result;
        result.real = c1.real + this->real;
        result.img = c1.img + this->img;
        return result;
    }

    complex operator-(complex &c1)
    {
        complex result;
        result.real = c1.real + this->real;
        result.img = c1.img + this->img;
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
    complex A3 = A1+A2;
    A3.DisplayComplex();

}

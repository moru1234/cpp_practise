#include<iostream>
using namespace std;
class complex
{
private:
int *real;
int *img;

public:
complex(int r=0, int l=0)
{
    real = new int (r);
    img = new int(l);
}

void setValue(int r=0, int l=0)
{
    real = new int (r);
    img = new int(l);
}
void showValues()
{
    cout<<"The value of real is: "<<*(this->real)<<" ,"<<*(this->img)<<endl;
}
friend complex add (complex &C1,complex &C2);
friend complex operator-(complex &C1,complex &C2);
};

complex add (complex &C1,complex &C2)
{
    complex result(*C1.real + *C2.real,*C1.img + *C2.img);
    return result;
}
    
complex operator-(complex &C1,complex &C2)
{
    complex result(*C1.real - *C2.real,*C1.img - *C2.img);
    return result;
}
        


int main()
{
    complex c1(10,20);
    complex c2 (20,40);

    complex c3 = add(c1,c2);
    c3.showValues();
    c1.setValue(20,50);
    c3 = add(c1,c2);
    c3.showValues();
    cout<<"______________________"<<endl;
    c1.showValues();
    c2.showValues();
    c3.showValues();
    c3 = c1 - c2;
    c3.showValues();

}

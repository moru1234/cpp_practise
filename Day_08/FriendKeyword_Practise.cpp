#include<iostream>
class TIME
{
private:
int sec, min, hour;

public:
    TIME():sec(0),min(0),hour(0){}
    friend void DisplayTime(const TIME& T);
};

void DisplayTime(const TIME& T)
{
    std::cout<<"This is friend function which displays time of TIME class "<<T.sec<<":"<<T.min<<":"<<T.hour<<std::endl;

}

int main()
{
    TIME T1;
    DisplayTime(T1);
}
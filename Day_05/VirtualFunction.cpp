#include<iostream>
using namespace std;

class Time
{
    public:
    virtual void displayTime()
       // void displayTime()
        {
            cout<<"This is base class and time is like H:M:S "<<endl;//<<hour<<":"<<mins<<":"<<sec<<endl;
        }
};

class TimeIST : public Time
{
    public:
        void displayTime() override
        {
            cout << "This is IST time and time is like H:M:S " <<endl;// hour + 5 << ":" << mins + 30 << ":" << sec << endl;
        }
};


int main()
{
    Time* T =new Time();
    Time* T1 = new TimeIST();

    T->displayTime();
    T1->displayTime();

    delete T;
    delete T1;

}

#include<iostream>

using namespace std;

class Time
{
private:
int hour,mins, sec;
public:
void setTime(int h, int m,int s)//setter function
{
    hour=h;
    mins=m;
    sec=s;
}
void getTime() 
{
    cout<<"The current time is "<<hour<<":"<<mins<<":"<<sec<<endl;
}

int getHourTime()//getter for hour time
{
    return hour;
}

};

int main()
{
Time T1; 
T1.setTime(11,21,10);
cout<<T1.getHourTime()<<endl;
T1.getTime();
}
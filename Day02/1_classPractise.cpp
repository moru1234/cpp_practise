//Constrcutor= default, parameterized
//copy constructor =
//function overloading 

//Shallow Copy: Both objects share the same memory for dynamically allocated data.
//              Changes in one object affect the other.

//Deep Copy: Each object has its own independent memory for dynamically allocated data.
//          Changes in one object do not affect the other.

//In the shallow copy, we copy the pointer values directly, 
//while in the deep copy, we allocate new memory for the copied object and copy the actual data, 
//preventing shared memory.

#include<iostream>
using namespace std;

//#define SHALLOWCOPY_1 0
#define SHALLOWCOPY_2 1
#define SHALLOWCOPY_3 1
#define DEEPCOPY 1

#ifdef SHALLOWCOPY_1 
class Time
{
private:
int *sec;
int *min;
int *hour;

public:
    Time(int h=0,int m=0,int s=0)//parameterised constructor
    {
        hour = new int(h);
        min = new int(m);
        sec = new int(s);

    }

    Time (Time &t)
    {
        this->hour=t.hour;
        this->min=t.min;
        this->sec = t.sec;
    }

    void displayTime()
    {
        cout<<"The current time is: "<<*hour<<":"<<*min<<":"<<*sec<<endl;
    }

    void changeHour(int h)
    {
        *hour = h;
    }

};
int main()
{
    Time T1(24,35,60), T2;
    Time T3(T1); //or Time T3 =T1 both are equal
    T1.displayTime();
    T2.displayTime();
    T3.displayTime();//before changing
    T3.changeHour(10);

    T3.displayTime();
    T1.displayTime();
    
}
#endif
#ifdef DEEPCOPY
class Time
{
private:
int hour;
int min;
int sec;

public:
Time(int hour, int min, int sec)
{
this->hour = hour;
this->min= min;
this->sec = sec; 
}

Time (Time &T)
{
    this->hour =T.hour;
    this->min = T.min;
    this->sec = T.min;
}
    void displayTime()
    {
        cout<<"The current time is:"<<this->hour<<":"<<this->min<<":"<<this->sec<<endl;
    }
    void changeTime(int h)
    {
        this->hour=h;
    }

};
int main()
{
    Time T1(10,20,30);
    Time T2 =T1;
    T1.displayTime();
    T2.displayTime();
    T2.changeTime(12);//here we are changing value of hour for T2 object

    T1.displayTime();//change of hour in T2 object not affected to T1 object = Deep copy
    T2.displayTime();//


}
#endif





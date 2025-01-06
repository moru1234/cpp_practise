#include<iostream>
using namespace std;
class Time
{
public:
	int min;
	int hour;

	void acceptTime(int mins, int hours)
	{
		this->min = mins;
		this->hour = hours;
	}

};

class Time2
{
private:
	int mins;
	int hours;
	int sec;
public:

	void acceptTime2( int Hours,int minutes,int sec)
	{
		
		this->hours = Hours;
		this->mins = minutes;
		this->sec = sec;

	}

	void displayTime()
	{
		cout << "This func shows current time is :" << this->hours << ":" << this->mins <<":" <<this->sec<< endl;
	}

};

int main()
{
	Time IST;
	Time2 UTC;

	UTC.acceptTime2(2,9,10);
	UTC.displayTime();
}
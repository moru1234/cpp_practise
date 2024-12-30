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
public:

	void acceptTime2(int minutes, int Hours)
	{
		this->mins = minutes;
		this->hours = Hours;
	}

	void displayTime()
	{
		cout << "This func shows current time is :" << this->hours << ":" << this->mins << endl;
	}

};

int main()
{
	Time IST;
	Time2 UTC;

	IST.acceptTime(5, 10);
	cout << "The time is " <<IST.hour<<":" << IST.min << endl;

	UTC.acceptTime2(13, 10);
	UTC.displayTime();

}
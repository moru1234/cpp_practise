#include<iostream>
using namespace std;

class Time
{
private:
	int min;
	int hour;
	int sec;
public:
	Time(int min, int hour)
		//constructor -> is first function called when object is created
		// constructor is used to initialize
		//It name is same as class name - as here it is Time
	{
		this->min = min;
		this->hour = hour;
		this->sec = 0;
		cout << "This is parameterized constructor" << endl;
	}

	Time(int min, int hour, int sec)
		//Constructor with three variales
	{
		this->min = min;
		this->hour = hour;
		this->sec = sec;
		cout << "This is parameterized constructor having min, hour, sec" << endl;
	}


	~Time()//It is name always start with ~ClassName ->here will be ~Time
		//destructor -> is last function called when object is distroyed
		//disctor used to destroy/delete all class object data -> called when object is destroyed 
		//Destructor dont have any function argument
	{
        static int i=0;
        i+=1;
		cout << "This is Distructor: "<<i << endl;
	}

	void acceptTime(int mins, int hour);

};

int main()
{
	Time T1(10, 5);
	Time T2(10, 5, 50);
	//Time t3(10);
	//	Time.acceptTime(2, 3);
}
#include <iostream>
using namespace std;

class Time {
private:
    int hour;
    int minute;
    int second;

public:
    // Constructor to initialize the time
    Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

    // Display function
    void display() {
        cout << "Time: " << hour << ":" << minute << ":" << second << endl;
    }

    // Copy constructor for shallow copy
    Time(const Time& t) {
        hour = t.hour;
        minute = t.minute;
        second = t.second;
        cout << "Shallow copy constructor called!" << endl;
    }

    // Getter functions to access time values
    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    // Setter functions to modify time values
    void setTime(int h, int m, int s) {
        hour = h;
        minute = m;
        second = s;
    }
};

int main() {
    // Create an object of Time
    Time time1(10, 30, 45);
    
    // Display time1
    cout << "Original Time object:" << endl;
    time1.display();
    
    // Create a shallow copy of time1
    Time time2 = time1; // Copy constructor is invoked here
    
    // Display time2 (shallow copy)
    cout << "Shallow Copied Time object:" << endl;
    time2.display();
    
    // Modify time2 and display both objects again
    time2.setTime(12, 45, 59);
    cout << "After modifying time2:" << endl;
    time1.display(); // time1 will remain unchanged
    time2.display(); // time2 will reflect the new values

    return 0;
}

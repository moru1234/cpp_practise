#include<iostream>
#include<vector>

using namespace std;

class Vehicle
{
    public:
        virtual void start() const
        {
            cout<<"Vehicle started"<<endl;
        }
        virtual void stop() const
        {
            cout<<"Vehicle stopped"<<endl;
        }
        
        virtual void displayType() const
        {
            cout<<"This is a generic vehicle"<<endl;
        }
        
        virtual ~Vehicle() = default;
};

class Car: public Vehicle
{
  public:
    void displayType() const override
    {
        cout<<"This is a car"<<endl;
    }
};

class Motorcycle: public Vehicle{
  public:
    void displayType() const override
    {
        cout<<"This is a motorcycle"<<endl;
    }
};


int main()
{
    std::vector<Vehicle*> v1 = {new Car(), new Motorcycle()};
    
    for(Vehicle* v:v1)
    {
        v->start();
        v->displayType();
        delete v;
    }
}

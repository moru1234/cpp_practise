#include<iostream>
using namespace std;

class Animal
{
 public:
    virtual void speak() const 
    {
        cout<<"Animal speak"<<endl;
    }
};

class Dog: public Animal
{
  public:
    void speak() const override
    {
        cout<<"Dog speaks"<<endl;
    }
};
int main()
{
    Dog d1;
    d1.speak();
}

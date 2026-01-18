#include<iostream>
using namespace std;

class Animal
{
  public:
    void eat()
    {
        std::cout<<"Animal is eating "<<std::endl;
    }
};

class Bird
{
  public: 
    void fly()
    {
        std::cout<<"Bird is flying"<<std::endl;
    }
};

class Bat: public Animal, public Bird
{
 public:
    void display()
    {
        std::cout<<"Bat is animal that can fly"<<endl;
    }
    
};

int main()
{
    Bat bat;
    bat.eat();
    bat.fly();
    bat.display();
}

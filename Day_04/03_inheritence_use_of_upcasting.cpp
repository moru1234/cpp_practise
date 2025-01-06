//Upcasting: Upcasting refers to converting a derived class object to a base class reference or pointer. 
//This is safe and is commonly used when we want to treat a derived object as an object of the base class. 
//The base class reference or pointer can access only the members and methods that are part of the base class (i.e., those that are not overridden in the derived class)

#include<iostream>
using namespace std;

class Animal {
public:
    virtual void speak() { std::cout << "Animal speaks" << std::endl; }
};

class Dog : public Animal {
public:
    void speak() override { std::cout << "Dog barks" << std::endl; }
    void fetch() { std::cout << "Dog fetches" << std::endl; }
};

int main() {
    Dog dog;
    Animal* animalPtr = &dog; // Upcasting
    animalPtr->speak();       // Calls Dog's overridden speak() method due to polymorphism

    // animalPtr->fetch();    // This would be invalid, as Animal doesn't know about fetch()
}

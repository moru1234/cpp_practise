//Object slicing happens when a derived class object is assigned to a base class object.
// The derived-specific parts of the object are "sliced off," leaving only the base class portion.
//Object slicing happens when a derived class object is assigned to a base class object.
// The derived-specific parts of the object are "sliced off," leaving only the base class portion.

//Upcasting works with pointers or references, avoiding slicing.
//Object slicing only occurs with value assignment, losing derived-specific details.

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
    Animal animal = dog; // Object slicing
    animal.speak();      // Calls Animal's speak(), not Dog's speak()
}

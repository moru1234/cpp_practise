#include <iostream>

// Integer is a wrapper class for demonstrating copy constructor issues with pointers.
// Copying using the default copy constructor leads to shallow copy of pointers.
// This can result in double deletion errors. Always implement deep copy for pointer members!

class Integer {
    int* m_pInt; // Pointer to integer for wrapper demonstration

public:
    // Default constructor: initializes pointer
    Integer() {
        m_pInt = new int(0); // Allocate integer and set to 0
    }

    // Parameterized constructor
    Integer(int value) {
        m_pInt = new int(value); // Allocate integer and set to value
    }

    // Copy constructor (Deep Copy): crucial for pointer members!
    Integer(const Integer& obj) {
        // Allocate new int and copy value from source object
        m_pInt = new int(*obj.m_pInt);
    }

    // Getter for value
    int getValue() const {
        return *m_pInt;
    }

    // Setter for value
    void setValue(int value) {
        *m_pInt = value;
    }

    // Destructor: releases allocated memory
    ~Integer() {
        delete m_pInt;
        // Best practice: set pointer to nullptr after deletion (defensive)
        m_pInt = nullptr;
    }
};

int main() {
    Integer i(5);  // Object with value 5
    Integer i2(i); // Copy object using deep copy
    std::cout << i.getValue() << std::endl;  // Prints 5
    std::cout << i2.getValue() << std::endl; // Prints 5
    return 0;
}
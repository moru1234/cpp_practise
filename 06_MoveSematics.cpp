#include <iostream>

// Integer class encapsulates an integer pointer, managing memory manually.
class Integer {
    int* m_pInt; // Pointer to an integer stored on the heap (dynamic memory)

public:
    // Default constructor: creates a new integer initialized to 0.
    Integer() {
        m_pInt = new int(0);
    }

    // Parameterized constructor: creates a new integer initialized to given value.
    Integer(int value) {
        m_pInt = new int(value);
    }

    // Accessor (getter): Returns the stored value.
    // Marked const to signal it does not modify the object's state.
    int GetValue() const {
        std::cout << "the value is " << *m_pInt << std::endl; // Output value for trace
        return *m_pInt;
    }

    // Mutator (setter): Sets the stored int to the given value.
    void SetValue(int value) {
        *m_pInt = value;
    }

    // Copy constructor: Creates a new object as a deep copy of another.
    // Ensures separate memory allocation, not just pointer copying.
    Integer(const Integer& obj) {
        std::cout << "Integer(const Integer&)" << std::endl; // Trace message
        m_pInt = new int(*obj.m_pInt); // Allocate new int and copy value
    }

    // "Move" constructor (not true C++11 move semantics): Demonstrates pointer transfer.
    // Initializes the pointer from the source object's pointer, and NULLs out the source pointer.
    Integer(Integer& obj) {
        std::cout << "Integer(Integer&)" << std::endl; // Trace message
        m_pInt = obj.m_pInt;
        obj.m_pInt = NULL; // Prevent deletion by other object
    }

    // Function to add two Integer objects.
    // Uses const reference for efficiency, avoids copy.
    // Returns sum of their contained int values.
    int Add(const Integer& a, const Integer& b) {
        // Since GetValue() is const, can safely use with const objects.
        return a.GetValue() + b.GetValue();
    }

    // Main function demonstrates instantiation and usage.
    int main() {
        Integer a(3), b(5); // Create Integer objects with values 3 and 5
        a.SetValue(Add(a, b)); // Set a's value to the sum of a and b
        a.GetValue(); // Output the new value of a
    }
};
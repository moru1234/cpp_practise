#include <iostream>
#include <memory> // For smart pointers
using namespace std;

// Class representing an Integer object with dynamic allocation
class Integer {
    int* m_Int; // Pointer to dynamically allocated integer

public:
    // Constructor: Allocates and initializes the integer value
    Integer(int value) {
        m_Int = new int(value); // Important: Allocates memory on the heap
        cout << "Integer() constructed" << endl;
    }

    // Set new value to the integer
    void setValue(int value) {
        *m_Int = value;
    }

    // Get the integer value
    int GetValue() {
        return *m_Int;
    }

    // Destructor: Cleans up allocated memory to prevent leaks
    ~Integer() {
        cout << "~Integer() destroyed" << endl;
        delete m_Int;
    }
};

// Helper function to safely display Integer value, checks for null pointer
void Display(Integer* p) {
    if (!p) return; // Defensive: protect against null pointer dereference
    cout << p->GetValue() << endl;
}

// Returns pointer to a new Integer object based on input value
Integer* GetPointer(int value) {
    Integer* p = new Integer(value); // Memory leak risk: manual deletion needed!
    return p;
}

// Encapsulated operation demonstrating usage of unique_ptr for safety
void Operate(int value) {
    std::unique_ptr<Integer> p(GetPointer(value)); // Wrap raw pointer for RAII

    if (p == nullptr) {
        p.reset(new Integer(value)); // If null, allocate new Integer
    }

    // Resetting unique_ptr deletes old object and takes ownership of new one
    p.reset(new Integer(value)); // Memory of previous Integer automatically cleaned up

    p->setValue(123); // Update value for demonstration
    Display(p.get());

    // Manual deletion NOT needed! unique_ptr handles cleanup.
    // This is what makes smart pointers essential in modern C++
}

int main() {
    Operate(42);
}
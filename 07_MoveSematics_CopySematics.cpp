#include <iostream>
#include <memory> // Recommended for smart pointers

// Integer class manages dynamic memory for an int value
class Integer {
    int* m_pInt; // Raw pointer for demonstration. Prefer smart pointers for real code!

public:
    // Default constructor: allocates an int and initializes to 0
    Integer() {
        m_pInt = new int(0); 
    }

    // Parameterized constructor: allocates an int and sets to value
    Integer(int value) {
        m_pInt = new int(value);
    }

    // Getter function: marked const, guarantees no member modification
    int GetValue() const {
        std::cout << "the value is " << *m_pInt << std::endl; // Shows value for tracing
        return *m_pInt;
    }

    // Setter function: changes stored value
    void SetValue(int value) {
        *m_pInt = value;
    }

    // Copy Constructor: deep copy to avoid shared pointers to same memory
    Integer(const Integer& obj) {
        std::cout << "Integer(const Integer&)
";
        m_pInt = new int(*(obj.m_pInt)); // Deep copy
    }

    // Move Constructor: transfers ownership, source left in valid but empty state
    Integer(Integer&& obj) noexcept {
        std::cout << "Integer(Integer&&)
";
        m_pInt = obj.m_pInt;
        obj.m_pInt = nullptr; // Source object shouldn't own resource anymore
    }

    // Assignment Operator: deep copy assignment. Always check for self-assignment!
    Integer& operator=(const Integer& obj) {
        if (&obj == this) return *this; // Self-assignment check

        // Free existing resource
        delete m_pInt;
        // Allocate new and copy value
        m_pInt = new int(*(obj.m_pInt));
        return *this;
    }

    // Move Assignment Operator: transfers ownership safely
    Integer& operator=(Integer&& obj) noexcept {
        if (&obj == this) return *this;
        delete m_pInt;
        m_pInt = obj.m_pInt;
        obj.m_pInt = nullptr;
        return *this;
    }

    // Destructor: frees allocated memory
    ~Integer() {
        delete m_pInt;
    }
};

// Function that adds two Integer objects. Notice use of const reference parameters for efficiency
int Add(const Integer& a, const Integer& b) {
    // Since GetValue() is const, it can be used with const Integer objects, safest promise!
    return a.GetValue() + b.GetValue();
}

// Main function tests Integer class functionality
int main() {
    Integer a(3), b(5);

    // Demonstrates assignment and value retrieval
    a.SetValue( Add(a, b) );
    a.GetValue();

    // Shows copy and move semantics in action
    Integer c = a;       // Copy constructor
    Integer d = std::move(b); // Move constructor

    return 0;
}
#include <iostream>

class Integer
{
    int m_value; // Member variable storing the integer value

public:
    // Default constructor using = default, instructs the compiler to generate a no-argument constructor
    Integer() = default;

    // Explicit value constructor, initializes object with an int value
    Integer(int value) : m_value(value) {}

    // Getter for m_value
    int getValue() const
    {
        return m_value;
    }

    // Setter for int values
    void setValue(int value)
    {
        m_value = value;
    }

    // Deleted setter for float values to prevent accidental float assignment
    void setValue(float value) = delete; // Prevents implicit conversion from float to int
};

int main()
{
    Integer I1(10); // Uses the parameterized constructor
    std::cout << "The value is " << I1.getValue() << std::endl; // Should print 10

    Integer I2(100);
    // I2.setValue(100.1f); // Uncommenting this line will cause a compile-time error because setValue(float) is deleted

    std::cout << "The value is " << I2.getValue() << std::endl; // Should print 100

    // Teaching extension: Demonstrating deletion of copy/move operations
    // Integer(const Integer&) = delete; // Uncomment to forbid copy construction
    // Integer(Integer&&) = delete;      // Uncomment to forbid move construction

    // Integer I3 = I1; // This will cause a compile error if copy constructor is deleted

    // Teaching extension: Custom copy constructor
    // Integer(const Integer& obj) { m_value = obj.m_value; } // Explicit copy

    // Teaching extension: Using explicit to avoid unwanted conversions
    // explicit Integer(double value) { m_value = static_cast<int>(value); } // Requires explicit cast

    return 0;
}
#include <iostream>
#include <memory>

class Integer {
    std::unique_ptr<int> m_pInt;

public:
    Integer() : m_pInt(std::make_unique<int>(0)) {}
    Integer(int value) : m_pInt(std::make_unique<int>(value)) {}

    // Copy constructor (deep copy using unique_ptr)
    Integer(const Integer& obj) : m_pInt(std::make_unique<int>(*obj.m_pInt)) {}

    int getValue() const { return *m_pInt; }
    void setValue(int value) { *m_pInt = value; }
    // Destructor auto-generated, no manual delete needed
};

int main() {
    Integer i(5);
    Integer i2(i);
    std::cout << i.getValue() << std::endl;
    std::cout << i2.getValue() << std::endl;
    return 0;
}
#include <iostream>
#include <string>

// Use PascalCase by convention for class names in modern C++
class Car {
private:
    int price;                // Car's price. Private encapsulation: best practice!
    std::string name;         // Car's name/model. Private for protecting invariants.
    static int objectCount;   // Static member: counts total cars created.

public:
    // Delegating constructors—modern practice for eliminating redundancy.
    Car(int value) : Car("Default", value) {
        // "Default" name, custom price
        // Prefer member initializer list for efficient initialization.
    }

    Car(std::string _name) : Car(_name, 0) {
        // Only name provided; price defaults to zero
        // Again, uses delegation for clarity.
    }

    Car(std::string _name, int _price) : name(_name), price(_price) {
        // Preferred: explicit, full initializer.
        ++objectCount; // track objects created
    }

    // Rule of Three demonstration: if managing resources, define copy constructor & assignment
    Car(const Car& other) : name(other.name), price(other.price) {
        ++objectCount;
        // Deep-copy logic if owning dynamic memory
    }

    Car& operator=(const Car& other) {
        if (this != &other) {
            name = other.name;  // Assign members
            price = other.price;
            // No need for memory management here, but this pattern matters if you own pointers!
        }
        return *this;
    }

    // Const-correct detail getter: good for any read-only member function
    void getCarDetail() const {
        std::cout << "The value is " << price << " " << name << std::endl;
    }

    // Static member function to retrieve car count
    static int getCarCount() {
        return objectCount;
    }

    // Advanced: operator overloading to make printing objects intuitive. Great for code quality!
    friend std::ostream& operator<<(std::ostream& os, const Car& car) {
        os << "Car(name: " << car.name << ", price: " << car.price << ")";
        return os;
    }

    // Bonus: comparison method for demonstration (teaches OOP extensibility)
    bool isMoreExpensiveThan(const Car& other) const {
        return price > other.price;
    }
};

// Static member initialization
int Car::objectCount = 0;

int main() {
    Car c1(1000);                       // Delegating constructor: sets "Default", 1000
    Car c2("BMW");                      // Delegates: "BMW", 0
    Car c3("BMW", 1000);                // Direct: "BMW", 1000

    c1.getCarDetail();
    c2.getCarDetail();
    c3.getCarDetail();

    // Demonstrating copy constructor and assignment operator
    Car c4 = c3;                        // Invokes copy constructor
    Car c5("Audi", 2000);
    c4 = c5;                            // Assignment operator, c4 becomes "Audi", 2000

    std::cout << c4 << std::endl;       // Uses overloaded << for stylish print!

    // Compare cars by price
    if (c5.isMoreExpensiveThan(c1)) {
        std::cout << c5 << " is more expensive than " << c1 << std::endl;
    }

    // Show how many car objects have been created
    std::cout << "Total Car objects created: " << Car::getCarCount() << std::endl;

    return 0;
}

/*Encapsulation secures your variables, enabling robust OOP design.Delegating constructors eliminate repetitive code, keep logic centralized—especially powerful in complex object hierarchies.Rule of Three: Always define copy constructor and assignment operator if resource management (like pointers) is involved; good habit even for basic classes!Static members and methods: Perfect for tracking global metrics or shared properties.Operator overloading (<<) allows seamless use of your custom types with streams; makes your code elegant and professional.Const-correctness: Mark functions const if they don't mutate the object, unlocking extra compiler optimizations and safety.Comparison function: Shows how to extend object capabilities (OOP extensibility).
*/
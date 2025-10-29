#include <iostream>

// Returns r-value
int Add(int x, int y) {
    // Adding two ints returns a temporary result (r-value)
    return x + y;
}

// Returns l-value
int& Transform(int& x) {
    // Modifying the original variable via reference
    x *= x;
    // Returning reference allows assignment to result of function
    return x;
}

int main() {
    // x, y, z are l-values (named variables stored in memory)
    int x = 5;
    int y = 10;
    int z = 8;

    // r-value examples: numbers, results of expressions without a name
    // Here (x+y) returns an r-value; multiplying with z is also r-value
    int result = (x + y) * z;

    // l-value example: variables you can assign to
    ++x = 6; // ++x is an l-value, so assignment is possible

    // Demonstrate function returning l-value reference
    Transform(x) = 100; // Changes x directly via the returned reference

    std::cout << "x: " << x << std::endl;
    std::cout << "result: " << result << std::endl;

    // Returning r-value from a function
    int sum = Add(y, z); // Add returns a temporary r-value

    std::cout << "sum: " << sum << std::endl;

    // Show l-value and r-value in practice
    // L-values: variables that you can reference, assign to, or take address of
    // R-values: temporaries, results of expressions, can't assign to or reference

    // Note: You can use std::move with r-values
    int a = 42;
    int&& rref = std::move(a); // r-value reference (since C++11)

    std::cout << "r-value ref: " << rref << std::endl;

    return 0;
}
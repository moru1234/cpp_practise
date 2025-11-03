#include <iostream>
using namespace std;

int main() {
    int a = 3, b = 2;

    // C-style cast: prone to errors, does not check type safety!
    // float f = (float)a / b; // This works, but is dangerous in other scenarios.

    // Modern C++: Always prefer explicit cast operators for safety and clarity!
    float f = static_cast<float>(a) / b; // static_cast checks types at compile-time.

    // C-style pointer cast: dangerous, allows almost anything!
    // char* p = (char*)&a; // This allows casting an int pointer to a char pointer unsafely.

    // static_cast is safer: Will NOT allow fundamentally unsafe pointer conversions.
    // char* p_static_cast = static_cast<char*>(&a); // Compilation error! Good for safety.

    // reinterpret_cast: used for low-level, implementation-defined conversions (rarely needed!)
    // Warning: Only use when you are absolutely sure of what you are doing!
    char* p = reinterpret_cast<char*>(&a);

    // const_cast: used for removing or adding const qualifier (dangerous, only if you know what you're doing!)
    const int x = 1;
    // int* p_const = reinterpret_cast<int*>(&x); // Not allowed, can't discard const qualifier.
    int* p_constCast = const_cast<int*>(&x); // Legal, but modifying *p_constCast is undefined behaviour!

    cout << "The result is " << f << endl;
}
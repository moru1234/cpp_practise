#include<iostream>
using namespace std;

class Shape
{
public:
    // Virtual function for drawing the shape
    //virtual void draw() 
    void draw() 
    {
        cout << "Drawing a generic shape." << endl;
    }
};

class Rectangle : public Shape
{
public:
    // Overriding the draw method for Rectangle
    void draw()
    {
        cout << "Drawing a rectangle." << endl;
    }

};

// class Circle : public Shape
// {
// public:
//     // Overriding the draw method for Circle
//     void draw()
//     {
//         cout << "Drawing a circle." << endl;
//     }

// };

int main() 
{
    // Shape s1;Rectangle R1; Circle C1;
    // s1.draw();
    // R1.draw();
    // C1.draw();

        Shape* s1 = new Shape();
    Shape* R1 = new Rectangle();
    // Shape* C1 = new Circle();

    s1->draw();  // Calls Shape's draw
    R1->draw();  // Calls Rectangle's draw (polymorphism in action)
    // C1->draw();  // Calls Circle's draw (polymorphism in action)

    delete s1;
    delete R1;
    // delete C1;
    return 0;
}

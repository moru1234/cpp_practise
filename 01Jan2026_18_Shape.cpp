#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

class Shape
{
  public:
    virtual double area() const = 0;
    virtual double perimeter() const =0;
    
    virtual ~Shape() = default;
    
    virtual void DisplayType() const
    {
        std::cout<<"This is a generic shape"<<std::endl;
    }
};

class Circle: public Shape
{
    private:
        double radius;
    public:
        Circle(double r): radius(r)
        {
          
        }
        
        double area() const override
        {
            return 3.14*radius*radius;
        }
        double perimeter() const override
        {
            return 2*3.14*radius;
        }
        
        void DisplayType() const override
        {
            std::cout<<"This is a circle"<<endl;
        }
};

class Rectangle : public Shape
{
    private:
        double width, height;
    public:
        Rectangle(double w, double h): width(w), height(h)
        {
            
        }
        
        double area() const override
        {
            return height*width;
        }
        double perimeter() const override
        {
            return 2*(width + height);
        }
        
        void DisplayType() const override
        {
            std::cout<<"This is a Rectangle"<<endl;
        }
};

class Traingle : public Shape
{
    private:
        double side1, side2, side3;
    public:
        Traingle(double s1, double s2, double s3): side1(s1), side2(s2), side3(s3)
        {
            
        }
        double area() const override
        {
            double s = (side1 + side2 + side3)/2;
            return std::sqrt(s*(s-side1)*(s-side2)*(s-side3));
        }
        
        double perimeter() const override
        {
            return side1+ side2+side3;
        }
        
        void DisplayType() const override
        {
            cout<<"This is Rectangle"<<endl;
        }
};

int main()
{
std::vector<Shape*> shapes = {
    new Circle(5.0), new Rectangle(4.0, 6.0), new Traingle(3.0, 4.0, 5.0)
};

for(Shape* shape:shapes)
{
    shape->DisplayType();
    cout<<"Area"<<shape->area()<<", perimeter"<<shape->perimeter()<<endl;
    delete shape;
}
}

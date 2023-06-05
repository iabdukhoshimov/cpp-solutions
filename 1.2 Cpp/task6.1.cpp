#include <iostream>

class Shape {
protected:
    double width;
    double height;

public:
    Shape(double w, double h) : width(w), height(h) {}

    virtual double area() = 0;
};

class Triangle : public Shape {
public:
    Triangle(double w, double h) : Shape(w, h) {}

    double area() override {
        return (width * height) / 2.0;
    }
};

class Rectangle : public Shape {
public:
    Rectangle(double w, double h) : Shape(w, h) {}

    double area() override {
        return width * height;
    }
};

int main() {
    Triangle triangle(5.0, 4.0);
    Rectangle rectangle(6.0, 3.0);

    std::cout << "Area of the triangle: " << triangle.area() << std::endl;
    std::cout << "Area of the rectangle: " << rectangle.area() << std::endl;

    return 0;
}

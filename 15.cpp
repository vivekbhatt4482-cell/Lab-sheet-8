#include <iostream>
using namespace std;

class Shape {           // Abstract class
public:
    virtual void area() = 0;   // Pure virtual function
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    void area() {
        cout << "Area of Circle: " << 3.14 * radius * radius << endl;
    }
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle: " << length * width << endl;
    }
};

int main() {
    Shape* s;

    Circle c(5);
    Rectangle r(4, 6);

    s = &c;
    s->area();

    s = &r;
    s->area();

    return 0;
}

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void area() {
        cout << "Area of Shape" << endl;
    }
};

class Rectangle : public Shape {
public:
    void area() override {
        int length = 10;
        int breadth = 5;

        cout << "Area of Rectangle = " << length * breadth << endl;
    }
};

class Circle : public Shape {
public:
    void area() override {
        float radius = 5;

        cout << "Area of Circle = " << 3.14 * radius * radius << endl;
    }
};

int main() {
    Shape *s;

    Rectangle r;
    Circle c;

    s = &r;
    s->area();

    s = &c;
    s->area();

    return 0;
}

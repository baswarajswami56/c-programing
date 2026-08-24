#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    // Default constructor
    Rectangle() {
        length = breadth = 0;
    }

    // Parameterized constructor
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    // Copy constructor
    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;       // Default
    Rectangle r2(10,5); // Parameterized
    Rectangle r3(8,10);   // Copy

    r1.area();
    r2.area();
    r3.area();

    return 0;
}

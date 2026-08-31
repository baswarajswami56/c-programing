#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;

public:
    Rectangle() {
        length = breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
    }

    void area() {
        cout << "Area = " << length * breadth << endl;
    }
};

int main() {
    Rectangle r1;       
    Rectangle r2(10,5); 
    Rectangle r3(8,10);   

    r1.area();
    r2.area();
    r3.area();

    return 0;
}

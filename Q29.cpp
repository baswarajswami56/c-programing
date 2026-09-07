#include <iostream>
using namespace std;

class Box {
private:
    double length;
    double width;
    double height;

public:
    Box() {
        length = 0;
        width = 0;
        height = 0;
        cout << "Default Constructor called." << endl;
    }

    Box(double l, double w, double h) {
        length = l;
        width = w;
        height = h;
        cout << "Parameterized Constructor called." << endl;
    }

    Box(const Box &obj) {
        length = obj.length;
        width = obj.width;
        height = obj.height;
        cout << "Copy Constructor called." << endl;
    }

    void displayVolume() {
        double volume = length * width * height;
        cout << "Volume of Box: " << volume << endl << endl;
    }
};

int main() {
    Box b1;
    b1.displayVolume();

    Box b2(10.5, 5.5, 4.0);
    b2.displayVolume();

    Box b3 = b2; 
    b3.displayVolume();

    return 0;
}

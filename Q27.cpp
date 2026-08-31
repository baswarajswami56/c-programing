#include <iostream>
using namespace std;

class Product {
    int id;
    string name;
    float price;

public:
    Product() {
        id = 0;
        name = "Unknown";
        price = 0;
    }

    Product(int i, string n, float p) {
        id = i;
        name = n;
        price = p;
    }

    Product(const Product &p) {
        id = p.id;
        name = p.name;
        price = p.price;
    }

    void display() {
        cout << "ID: " << id
             << "\nName: " << name
             << "\nPrice: " << price << "\n\n";
    }
};

int main() {
    Product p1;                    
    Product p2(20, "Laptop", 50000); 
    Product p3(17, "PC", 500000);  

    p1.display();
    p2.display();
    p3.display();

    return 0;
}

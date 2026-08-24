#include <iostream>
using namespace std;

class Employee {
    int id;
    string name;
    float salary;

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "Unknown";
        salary = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, float s) {
        id = i;
        name = n;
        salary = s;
    }

    // Copy constructor
    Employee(const Employee &e) {
        id = e.id;
        name = e.name;
        salary = e.salary;
    }

    void display() {
        cout << id << " " << name << " " << salary << endl;
    }
};

int main() {
    Employee e1;                       // Default
    Employee e2(20, "Baswaraj", 50000); // Parameterized
    Employee e3(e2);                   // Copy

    e1.display();
    e2.display();
    e3.display();

    return 0;
}

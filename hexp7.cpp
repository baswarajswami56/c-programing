#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int rollNo;

public:
    void getStudent()
    {
        cout << "Enter Name: ";
        cin >> name;

        cout << "Enter Roll No: ";
        cin >> rollNo;
    }
};

class Marks : public Student
{
private:
    int marks;

public:
    void getMarks()
    {
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayMarks()
    {
        cout << "\n--- Student Marks ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

class Sports : public Student
{
private:
    int score;

public:
    void getSports()
    {
        cout << "Enter Sports Score: ";
        cin >> score;
    }

    void displaySports()
    {
        cout << "\n--- Student Sports ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Sports Score: " << score << endl;
    }
};

int main()
{
    Marks m;
    Sports s;

    cout << "Enter Marks Student Details" << endl;
    m.getStudent();
    m.getMarks();

    cout << "\nEnter Sports Student Details" << endl;
    s.getStudent();
    s.getSports();

    m.displayMarks();
    s.displaySports();

    return 0;
};

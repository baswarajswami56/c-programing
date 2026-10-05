#include <iostream>
using namespace std;
class Student
{
    int roll;
    char name[20];

public:

    void getdata()
    {
        cout << "\nEnter Roll No. : ";
        cin >> roll;

        cout << "Enter Student Name : ";
        cin >> name;
    }

    void putdata()
    {
        cout << "\n******** Student Marklist ********";

        cout << "\nRoll No. : " << roll;
        cout << "\nStudent Name : " << name << endl;
    }
};

class StudentExam : public Student
{
public:

    int sub1, sub2, sub3, sub4, sub5;
    float per;

    void accept_data()
    {
        getdata();

        cout << "\nEnter Marks for DMS : ";
        cin >> sub1;

        cout << "Enter Marks for CN : ";
        cin >> sub2;

        cout << "Enter Marks for OEC : ";
        cin >> sub3;

        cout << "Enter Marks for MDM: ";
        cin >> sub4;

        cout << "Enter Marks for OOC : ";
        cin >> sub5;
    }

    void display_data()
    {
        putdata();

        cout << "\nMarks of DMS : " << sub1;
        cout << "\nMarks of CN : " << sub2;
        cout << "\nMarks of OEC : " << sub3;
        cout << "\nMarks of MDM : " << sub4;
        cout << "\nMarks of OOC : " << sub5;
    }
};
class StudentResult : public StudentExam
{
public:

    void calculate()
    {
        float per;

        per = (sub1 + sub2 + sub3 + sub4 + sub5 ) / 5.0;

        cout << "\n\nTotal Percentage : " << per;
    
    }
};


int main()
{
    StudentResult str;
    int cnt, i;

    for(i = 0; i < cnt; i++)
    {
        str.accept_data();
        str.display_data();
        str.calculate();
    }

    return 0;
}

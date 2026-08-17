#include <iostream>
#include <iomanip>
using namespace std;

class Time
{
    int hh, mm, ss;

public:
    void getData()
    {
        cout << "Enter hours minutes seconds: ";
        cin >> hh >> mm >> ss;
    }

    void add(Time t)
    {
        int total = (hh * 3600 + mm * 60 + ss) +
                    (t.hh * 3600 + t.mm * 60 + t.ss);

        int h = total / 3600;
        total = total % 3600;

        int m = total / 60;
        int s = total % 60;

        cout << "Total Time = "
             << setw(2) << setfill('0') << h << ":"
             << setw(2) << setfill('0') << m << ":"
             << setw(2) << setfill('0') << s << endl;
    }
};

int main()
{
    Time t1, t2;

    cout << "Enter first time:\n";
    t1.getData();

    cout << "Enter second time:\n";
    t2.getData();

    t1.add(t2);

    return 0;
}

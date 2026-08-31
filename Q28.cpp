#include <iostream>
using namespace std;

class Bank
{
private:
    string name;
    int balance;

    void showBalance()
    {
        cout << "Account Holder: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

public:
    Bank(string n, int b)
    {
        name = n;
        balance = b;
    }

    void deposit()
    {
        int amount;

        cout << "Enter deposit amount: ";
        cin >> amount;

        balance = balance + amount;

        cout << "Amount deposited successfully!" << endl;

        showBalance();
    }
    void withdraw()
    {
        int amount;

        cout << "Enter withdrawal amount: ";
        cin >> amount;

        if (amount <= balance)
        {
            balance = balance - amount;
            cout << "Amount withdrawn successfully!" << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
        showBalance();
    }

    class Account
    {
    public:
        void accountType()
        {
            cout << "Account Type: Savings Account" << endl;
        }
    };
};

int main()
{
    string name;
    int balance;
    cout << "Enter account holder name: ";
    cin >> name;

    cout << "Enter initial balance: ";
    cin >> balance;

    Bank b(name, balance);

    b.deposit();
    b.withdraw();

    Bank::Account a;

    a.accountType();

    return 0;
}

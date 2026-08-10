#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;

    cout << "Enter a positive integer (N): ";
    cin >> n;

    // Use a loop to calculate the sum of natural numbers up to N
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    return 0;
}


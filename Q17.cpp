#include <iostream>
#include <algorithm>
#include <string>

int main() {
    int number;
    std::cout << "Enter an integer to reverse: ";
    std::cin >> number;

    // Handle negative numbers by converting to string
    std::string numStr = std::to_string(number);
    
    if (number < 0) {
        std::reverse(numStr.begin() + 1, numStr.end());
    } else {
        std::reverse(numStr.begin(), numStr.end());
    }

    std::cout << "Reversed number: " << numStr << std::endl;
    return 0;
}


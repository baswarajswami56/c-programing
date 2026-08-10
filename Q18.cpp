#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string str, rev;
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    rev = str;
    std::reverse(rev.begin(), rev.end());

    if (str == rev) {
        std::cout << "\"" << str << "\" is a palindrome.\n";
    } else {
        std::cout << "\"" << str << "\" is not a palindrome.\n";
    }

    return 0;
}


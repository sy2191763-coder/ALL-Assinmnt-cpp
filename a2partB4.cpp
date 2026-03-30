#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    if (isupper(ch)) {
        std::cout << ch << " is an uppercase letter." << std::endl;
    } else if (islower(ch)) {
        std::cout << ch << " is a lowercase letter." << std::endl;
    } else if (isdigit(ch)) {
        std::cout << ch << " is a digit." << std::endl;
    } else {
        std::cout << ch << " is a special character." << std::endl;
    }

    return 0;
}

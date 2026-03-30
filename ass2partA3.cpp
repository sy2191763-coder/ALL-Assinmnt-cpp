#include <iostream>

int main() {
    int number, divisor;
    std::cout << "Enter a number to check: ";
    std::cin >> number;
    std::cout << "Enter the divisor: ";
    std::cin >> divisor;

    if (divisor == 0) {
        std::cout << "Cannot divide by zero." << std::endl;
    } else if (number % divisor == 0) {
        std::cout << number << " is divisible by " << divisor << "." << std::endl;
    } else {
        std::cout << number << " is not divisible by " << divisor << "." << std::endl;
    }

    return 0;
}

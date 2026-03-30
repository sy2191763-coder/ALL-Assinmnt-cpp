#include <iostream>
int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    if (num2 != 0) {
        int remainder = num1 % num2;
        std::cout << "Remainder: " << remainder << std::endl;
    } else {
        std::cout << "Division by zero is not allowed." << std::endl;
    }

    return 0;
}

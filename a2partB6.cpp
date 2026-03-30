#include <iostream>

int main() {
    char op;
    double num1, num2;
    std::cout << "Enter operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "Enter two operands: ";
    std::cin >> num1 >> num2;
    double result;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << num1 << " + " << num2 << " = " << result << std::endl;
            break;
        case '-':
            result = num1 - num2;
            std::cout << num1 << " - " << num2 << " = " << result << std::endl;
            break;
        case '*':
            result = num1 * num2;
            std::cout << num1 << " * " << num2 << " = " << result << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                std::cout << num1 << " / " << num2 << " = " << result << std::endl;
            } else {
                std::cout << "Error! Division by zero." << std::endl;
            }
            break;
        default:
            std::cout << "Error! Invalid operator." << std::endl;
            break;
    }

    return 0;
}

#include <iostream>
    int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;
    float average = (float)(num1 + num2) / 2; // Explicit casting
    std::cout << "The average as a float is: " << average << std::endl;
    return 0;
}

#include <iostream>
#include <cmath>

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    originalNum = num;
    for (originalNum = num; originalNum != 0; ++n) {
        originalNum /= 10;
    }
    for (originalNum = num; originalNum != 0; originalNum /= 10) {
        remainder = originalNum % 10;
        result += pow(remainder, n);
    }
    if ((int)result == num)
        std::cout << num << " is an Armstrong number." << std::endl;
    else
        std::cout << num << " is not an Armstrong number." << std::endl;
    return 0;
}

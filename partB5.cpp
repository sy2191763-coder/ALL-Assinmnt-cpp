#include <iostream>

int main() {
    int n, sum = 0, remainder;
    std::cout << "Enter an integer: ";
    std::cin >> n;
    while (n != 0) {
        remainder = n % 10;
        sum += remainder;
        n /= 10;
    }
    std::cout << "Sum of digits: " << sum << std::endl;
    return 0;
}

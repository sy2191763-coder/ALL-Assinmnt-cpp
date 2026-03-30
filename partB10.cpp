#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    std::cout << "Sum of the series is: " << sum << std::endl;
    return 0;
}



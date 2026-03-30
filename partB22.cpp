#include <iostream>

int main() {
    int n, sum = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    // The sum of the first n odd natural numbers is n*n
    sum = n * n;
    // Alternatively, using a loop:
    // for (int i = 0; i < n; ++i) {
    //     sum += (2 * i + 1);
    // }
    std::cout << "Sum of first " << n << " odd natural numbers: " << sum << std::endl;
    return 0;
}

#include <iostream>

int main() {
    int n, i, j;
    bool isPrime;
    std::cout << "Enter a number: ";
    std::cin >> n;
    for (i = n - 1; i >= 2; --i) {
        isPrime = true;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            std::cout << "The last prime number before " << n << " is: " << i << std::endl;
            break;
        }
    }
    if (!isPrime) {
        std::cout << "No prime number found before " << n << std::endl;
    }
    return 0;
}

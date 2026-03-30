#include <iostream>

int main() {
    int i, j;
    bool isPrime;
    std::cout << "Prime numbers between 1 and 100 are:" << std::endl;
    for (i = 2; i <= 100; ++i) {
        isPrime = true;
        for (j = 2; j <= i / 2; ++j) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}

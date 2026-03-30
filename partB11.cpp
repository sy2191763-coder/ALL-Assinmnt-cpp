#include <iostream>

int main() {
    int n, i, sum;
    std::cout << "Perfect numbers between 1 and 500 are: ";
    for (n = 1; n <= 500; ++n) {
        sum = 0;
        for (i = 1; i < n; ++i) {
            if (n % i == 0) {
                sum += i;
            }
        }
        if (sum == n) {
            std::cout << n << " ";
        }
    }
    std::cout << std::endl;
    return 0;
}

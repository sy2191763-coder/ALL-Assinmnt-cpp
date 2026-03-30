#include <iostream>

int main() {
    int n, totalSum = 0;
    std::cout << "Enter the value of n: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {
        int currentSum = 0;
        for (int j = 1; j <= i; ++j) {
            currentSum += j;
        }
        totalSum += currentSum;
    }
    std::cout << "Sum of the series: " << totalSum << std::endl;
    return 0;
}

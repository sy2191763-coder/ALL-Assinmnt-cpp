#include <iostream>

int main() {
    int low, high, i;
    bool isPrime = true;
    std::cout << "Enter two numbers(intervals): ";
    std::cin >> low >> high;
    std::cout << "Prime numbers between " << low << " and " << high << " are: ";
    while (low < high) {
        isPrime = true;
        if (low == 0 || low == 1) {
            isPrime = false;
        }
        for (i = 2; i <= low / 2; ++i) {
            if (low % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            std::cout << low << " ";
        ++low;
    }
    std::cout << std::endl;
    return 0;
}

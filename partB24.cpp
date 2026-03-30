#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // This program reads numbers until a non-integer is entered, then displays them in reverse.
    std::vector<int> numbers;
    int num;
    std::cout << "Enter numbers (enter non-integer to stop):" << std::endl;
    while (std::cin >> num) {
        numbers.push_back(num);
    }
    std::cout << "Numbers in reverse order: ";
    for (int i = numbers.size() - 1; i >= 0; --i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}





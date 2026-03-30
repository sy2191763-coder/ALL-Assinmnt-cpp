#include <iostream>

int main() {
    int rows = 5; // Assuming a 5-row pattern
    for (int i = 1; i <= rows; ++i) {
        for (int j = 1; j <= rows - i; ++j) {
            std::cout << " "; // Print leading spaces
        }
        for (int k = 1; k <= i; ++k) {
            std::cout << k; // Print numbers from 1 to i
        }
        std::cout << std::endl;
    }
    return 0;
}

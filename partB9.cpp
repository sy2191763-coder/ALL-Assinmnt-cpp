#include <iostream>

int main() {
    std::cout << "--- Example of break statement ---" << std::endl;
    for (int i = 1; i <= 10; ++i) {
        if (i == 5) {
            std::cout << "Loop terminated at i = 5 (break)" << std::endl;
            break; // Terminates the loop entirely
        }
        std::cout << "i: " << i << std::endl;
    }
    std::cout << "--- Example of continue statement ---" << std::endl;
    for (int j = 1; j <= 5; ++j) {
        if (j == 3) {
            std::cout << "Skipping j = 3 (continue)" << std::endl;
            continue; // Skips the current iteration
        }
        std::cout << "j: " << j << std::endl;
    }
    return 0;
}

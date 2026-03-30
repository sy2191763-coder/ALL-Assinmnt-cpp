#include <iostream>

int main() {
    int rows = 5; // Assuming a 5-row pattern
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout << static_cast<char>('A' + j);
        }
        std::cout << std::endl;
    }
    return 0;
}

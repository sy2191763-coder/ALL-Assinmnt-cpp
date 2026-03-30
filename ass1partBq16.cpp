#include <iostream>

int main() {
    bool Result;
    Result = (25 / 5 + 3 * 2 <= 15) || ((8 - 3) > 10);
    std::cout << "Result: " << std::boolalpha << Result << std::endl;

    return 0;
}

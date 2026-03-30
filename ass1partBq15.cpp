#include <iostream>

int main() {
    bool Result;
    Result = ((10 + 5) * 2 > 20) && (30 - 10 == 20);
    std::cout << "Result: " << std::boolalpha << Result << std::endl;

    return 0;
}

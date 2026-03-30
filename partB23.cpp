#include <iostream>

int main() {
    int count = 0, sum = 0;
    for (int i = 100; i <= 200; ++i) {
        if (i % 9 == 0) {
            sum += i;
            count++;
        }
    }
    std::cout << "Number of integers between 100 and 200 divisible by 9: " << count << std::endl;
    std::cout << "Sum of integers between 100 and 200 divisible by 9: " << sum << std::endl;
    return 0;
}

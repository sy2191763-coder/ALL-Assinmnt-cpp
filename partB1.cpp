#include <iostream>

int main() {
    int n, num, digit, rev = 0;
    std::cout << "Enter a positive number: ";
    std::cin >> num;
    n = num;
    while (num != 0) {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    }
    if (n == rev)
        std::cout << n << " is a palindrome number." << std::endl;
    else
        std::cout << n << " is not a palindrome number." << std::endl;
    return 0;
}

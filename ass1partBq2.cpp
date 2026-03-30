#include <iostream>
int main() {
int a, b;
std::cout << "Enter two numbers: ";
std::cin >> a >> b;
a = a + b;
b = a - b;
a = a - b;
std::cout << "After swapping, numbers are: " << a << " and " << b << std::endl;
return 0;
}

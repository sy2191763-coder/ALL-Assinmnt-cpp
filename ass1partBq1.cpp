#include <iostream>
int main() {
int a, b, temp;
std::cout << "Enter two numbers: ";
std::cin >> a >> b;
temp = a;
a = b;
b = temp;
std::cout << "After swapping, numbers are: " << a << " and " << b << std::endl;
return 0;
}

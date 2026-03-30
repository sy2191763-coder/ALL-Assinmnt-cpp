#include <iostream>
int main() {
char character;
std::cout << "Enter a character: ";
std::cin >> character;
int ascii_value = (int)character; // Explicit casting
std::cout << "The ASCII value of " << character << " is: " << ascii_value << std::endl;
return 0;
}

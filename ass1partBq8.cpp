#include <iostream>
int main() {
char c;
bool is_vowel = false;
std::cout << "Enter a character: ";
std::cin >> c;
if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
is_vowel = true;
}
if (is_vowel) {
std::cout << c << " is a vowel." << std::endl;
} else {
std::cout << c << " is a consonant." << std::endl;
}
return 0;
}

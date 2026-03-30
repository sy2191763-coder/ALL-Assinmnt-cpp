#include <iostream>
int main() {
int int_val = 10;
float float_val = 5.5;
float result = int_val + float_val; // Implicit casting of int_val to float
std::cout << "The result of adding an integer and a float is: " << result << std::endl;
return 0;
}

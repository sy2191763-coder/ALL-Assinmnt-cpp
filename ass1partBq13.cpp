#include <iostream>

int main() {
    double angle1, angle2, angle3;
    std::cout << "Enter first angle: ";
    std::cin >> angle1;
    std::cout << "Enter second angle: ";
    std::cin >> angle2;
    angle3 = 180.0 - (angle1 + angle2);
    std::cout << "Third angle is: " << angle3 << std::endl;
    return 0;
}

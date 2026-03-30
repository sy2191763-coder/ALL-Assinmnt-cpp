#include <iostream>

int main() {
    double side1, side2, side3;
    std::cout << "Enter three sides of the triangle: ";
    std::cin >> side1 >> side2 >> side3;

    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            std::cout << "Equilateral triangle." << std::endl;
        } else if (side1 == side2 || side1 == side3 || side2 == side3) {
            std::cout << "Isosceles triangle." << std::endl;
        } else {
            std::cout << "Scalene triangle." << std::endl;
        }
    } else {
        std::cout << "Not a valid triangle." << std::endl;
    }

    return 0;
}

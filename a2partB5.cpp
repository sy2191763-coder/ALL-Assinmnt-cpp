#include <iostream>

int main() {
    double units, bill = 0.0;
    std::cout << "Enter units consumed: ";
    std::cin >> units;

    if (units <= 50) {
        bill = units * 1.50;
    } else if (units <= 150) {
        bill = 50 * 1.50 + (units - 50) * 2.50;
    } else if (units <= 250) {
        bill = 50 * 1.50 + 100 * 2.50 + (units - 150) * 4.00;
    } else {
        bill = 50 * 1.50 + 100 * 2.50 + 100 * 4.00 + (units - 250) * 6.00;
    }

    std::cout << "The electricity bill is: $" << bill << std::endl;

    return 0;
}

#include <iostream>

int main() {
    int month;
    std::cout << "Enter month number (1-12): ";
    std::cin >> month;
    int days;

    switch (month) {
        case 2:
            days = 28; // Assuming not a leap year for simplicity
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;
        default:
            days = 0; // Invalid month
            break;
    }

    if (days != 0) {
        std::cout << "Number of days: " << days << std::endl;
    } else {
        std::cout << "Invalid month number." << std::endl;
    }

    return 0;
}

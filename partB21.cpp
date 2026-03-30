#include <iostream>
#include <climits>

int main() {
    int number, count = 0, maxVal = INT_MIN, minVal = INT_MAX, sum = 0;
    std::cout << "Enter a number (enter -1 to terminate):" << std::endl;

    while (std::cin >> number && number != -1) {
        sum += number;
        if (number > maxVal) {
            maxVal = number;
        }
        if (number < minVal) {
            minVal = number;
        }
        count++;
        std::cout << "Enter a number: ";
    }

    if (count > 0) {
        // Assuming average needs to be integer based on output example
        int average = static_cast<int>(static_cast<double>(sum) / count);
        std::cout << "Count: " << count << std::endl;
        std::cout << "Maximum: " << maxVal << std::endl;
        std::cout << "Minimum: " << minVal << std::endl;
        std::cout << "Average: " << average << std::endl;
    } else {
        std::cout << "No positive numbers entered." << std::endl;
    }
    return 0;
}

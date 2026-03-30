#include <iostream>

int main() {
    int marks;
    std::cout << "Enter the student's marks (0-100): ";
    std::cin >> marks;
    char grade;

    if (marks >= 90) {
        grade = 'A';
    } else if (marks >= 80) {
        grade = 'B';
    } else if (marks >= 70) {
        grade = 'C';
    } else if (marks >= 60) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    std::cout << "The grade is: " << grade << std::endl;

    return 0;
}

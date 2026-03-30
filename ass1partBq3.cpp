#include <iostream>
int main() {
float basic, hra, da, other_allowances, gross_salary;
std::cout << "Enter Basic Salary, HRA, DA, and Other Allowances: ";
std::cin >> basic >> hra >> da >> other_allowances;
gross_salary = basic + hra + da + other_allowances;
std::cout << "The Gross Salary is: " << gross_salary << std::endl;
return 0;
}

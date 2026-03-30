#include<iostream>
#include<cmath>

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    double x, sum = 0.0;
    int nTerms;
    std::cout << "Enter the value of x: ";
    std::cin >> x;
    std::cout << "Enter the number of terms: ";
    std::cin >> nTerms;

    for (int i = 0; i < nTerms; ++i) {
        int power = 2 * i;
        // Term is ((-1)^i * x^(2i)) / (2i)!
        double term = std::pow(-1, i) * std::pow(x, power) / factorial(power);
        sum += term;
    }
    std::cout << "Sum of the series up to " << nTerms << " terms: " << sum << std::endl;
    return 0;
}

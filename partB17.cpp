#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0.0, term;

    // Prompt the user to input the number of terms
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate the sum of the series using a for loop
    for (i = 1; i <= n; i++) {
        // Calculate the current term: 1 / (i*i) or 1 / pow(i, 2)
        // Using 1.0 ensures floating-point division
        term = 1.0 / (i * i);
        sum += term;
    }

    // Print the sum of the series
    printf("Sum of the series 1 + 1/(2^2) + ... + 1/(%d^2) is: %lf\n", n, sum);

    return 0;
}

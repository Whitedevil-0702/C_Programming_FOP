/// To Accept the Number of terms and find the sum of the sine series
#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    float x, term, sum = 0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the value of x (in radians): ");
    scanf("%f", &x);

    for (i = 0; i < n; i++) {
        term = pow(-1, i) * pow(x, 2 * i + 1) / factorial(2 * i + 1);
        sum += term;
    }

    printf("Sum of sine series: %f\n", sum);
    return 0;
}

int factorial(int num) {
    if (num == 0 || num == 1)
        return 1;
    else
        return num * factorial(num - 1);
}
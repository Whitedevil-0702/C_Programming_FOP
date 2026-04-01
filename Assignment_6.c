///Write a C function to compute the factorial of a number with and without recursion.
#include <stdio.h>

// Function to compute factorial without recursion
int factorial_iterative(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

// Function to compute factorial with recursion
int factorial_recursive(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial_recursive(n - 1);
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("Factorial (iterative): %d\n", factorial_iterative(num));
    printf("Factorial (recursive): %d\n", factorial_recursive(num));
    
    return 0;
}
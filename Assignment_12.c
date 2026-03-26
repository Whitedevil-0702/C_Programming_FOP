///12. To accept two numbers from user and compute smallest divisor and Greatest Common Divisor of these two numbers.
#include<stdio.h>
int main (){
    int num1, num2, i, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Compute GCD
    for(i = 1; i <= num1 && i <= num2; i++) {
        if(num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }
    
    // Compute LCM
    lcm = (num1 * num2) / gcd;
    
    printf("Greatest Common Divisor of %d and %d is: %d\n", num1, num2, gcd);
    printf("Least Common Multiple of %d and %d is: %d\n", num1, num2, lcm);
    return 0;
}
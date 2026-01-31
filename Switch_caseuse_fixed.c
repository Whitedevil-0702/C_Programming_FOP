#include <stdio.h>

int main(void) {
    int num1, num2, ch;
    float result;

    printf("Enter your 1st number: ");
    if (scanf("%d", &num1) != 1) return 1;

    printf("Enter your 2nd number: ");
    if (scanf("%d", &num2) != 1) return 1;

    printf("\nPress:\n1 to Add\n2 to Sub\n3 to Multiply\n4 to Div\n");
    printf("Enter Your Response: ");
    if (scanf("%d", &ch) != 1) return 1;

    switch (ch) {
        case 1:
            result = num1 + num2;
            printf("Sum of %d and %d is: %.2f\n", num1, num2, result);
            break;
        case 2:
            result = num1 - num2;
            printf("Diff of %d and %d is: %.2f\n", num1, num2, result);
            break;
        case 3:
            result = (float)num1 * num2;
            printf("Multiplication of %d and %d is: %.2f\n", num1, num2, result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Division by zero error\n");
            } else {
                result = (float)num1 / num2;
                printf("Division of %d and %d is: %.2f\n", num1, num2, result);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}

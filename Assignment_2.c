#include <stdio.h>
int main(){
    float a,b;
    int i;
    printf("Main Menu: \n");
    printf("Add two numbers: \n");
    printf("Subtract two numbers: \n");
    printf("Multiply two numbers: \n");
    printf("Divide two numbers: \n");
    printf("Exit \n");

    printf("Enter your choice: ");
    scanf("%d", &i);

    if (i>=1 && i<=4){
        printf("Enter two numbers: ");
        scanf("%f %f", &a, &b);
        }

    switch (i) {
        case 1:
        printf("\n Sum = %f", a+b);
        break;

        case 2:
        printf("\n Difference = %f", a-b);
        break;

        case 3:
        printf("\n Multiply = %f", a*b);
        break;

        case 4:
        printf("\n Division = %f", a/b);
        break;

        default:
        printf("\n Thank you / Invalid choice");
        break;
    }

    return 0;
}
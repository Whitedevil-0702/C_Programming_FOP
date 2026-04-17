#include <stdio.h>
#include <stdlib.h>

int main() {

    // Assignment 20
    // Program to swap two number with and without pointers

    // Swapping without pointers
    int a, b, temp;
    printf("Enter two numbers to swap (without pointers): ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    temp = a;
    a = b;
    b = temp;
    printf("After swapping (without pointers): a = %d, b = %d\n", a, b);

    // Swapping with pointers
    int x, y;
    printf("\nEnter two numbers to swap (with pointers): ");
    scanf("%d %d", &x, &y);
    printf("Before swapping: x = %d, y = %d\n", x,  y);
    int *ptr1 = &x;
    int *ptr2 = &y;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("After swapping (with pointers): x = %d, y = %d\n", x, y);  

    return 0;
}
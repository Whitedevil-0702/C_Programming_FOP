/// Wriite a program using Function call by refernce and by value to swap 2 umbers given by user 
#include<stdio.h>

// Function to swap by value
void swap_by_value(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("Inside swap_by_value: a = %d, b = %d\n", a, b);
}

// Function to swap by reference
void swap_by_reference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // Swapping by value
    swap_by_value(x, y);
    

    // Swapping by reference
    swap_by_reference(&x, &y);
    printf("After swapping by reference: x = %d, y = %d\n", x, y);
}
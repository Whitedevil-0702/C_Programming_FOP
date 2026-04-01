/// To accept a list of N integers and partition the list into two sublists containing even and odd numbers.
#include<stdio.h>
int main() {
    int n, i;
    printf("Enter the number of integers: ");
    scanf("%d", &n);
    
    int numbers[n];
    printf("Enter %d integers:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    
    printf("Even numbers:\n");
    for(i = 0; i < n; i++) {
        if(numbers[i] % 2 == 0) {
            printf("%d ", numbers[i]);
        }
    }
    
    printf("\nOdd numbers:\n");
    for(i = 0; i < n; i++) {
        if(numbers[i] % 2 != 0) {
            printf("%d ", numbers[i]);
        }
    }
    
    return 0;
}
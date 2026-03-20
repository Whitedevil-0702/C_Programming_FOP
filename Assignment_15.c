/// Write a code to genrate random numbers by taking input from user for range and number of random numbers to be generated
#include <stdio.h>
#include <stdlib.h>
#include <time.h>       
int main()
{
    int lower, upper, count, i;
    
    printf("Enter the lower bound of the range: ");
    scanf("%d", &lower);
    
    printf("Enter the upper bound of the range: ");
    scanf("%d", &upper);
    
    printf("Enter the number of random numbers to generate: ");
    scanf("%d", &count);
    
    // Seed the random number generator
    srand(time(0));
    
    printf("Generated random numbers:\n");
    for (i = 0; i < count; i++)
    {
        int num = (rand() % (upper - lower + 1)) + lower;
        printf("%d ", num);
    }
    
    printf("\n");
    return 0;
}
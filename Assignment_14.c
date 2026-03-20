///Write a C program to input a binary number from the user and convert it into a decimal number
#include <stdio.h>
#include <math.h>
int main()
{
    char binary[32];
    int decimal = 0, i, length;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    // Calculate the length of the binary number
    for (length = 0; binary[length] != '\0'; length++);

    // Convert binary to decimal
    for (i = 0; i < length; i++)
    {
        if (binary[length - i - 1] == '1')
        {
            decimal += pow(2, i);
        }
        else if (binary[length - i - 1] != '0')
        {
            printf("Invalid binary number.\n");
            return 1;
        }
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
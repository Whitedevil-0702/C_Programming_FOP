/// Write a C program that accepts a string from the user and performs the following string operations: i) length of string, ii) string reversal, iii) equality check, iv) check palindrome, v) check substring
#include <stdio.h>
#include <string.h>

void main() {
    char str1[100], str2[100];
    int len, i, j, flag = 1;

    printf("Enter the first string: ");
    ///gets(str1);
    printf("Enter the second string: ");
    ///gets(str2);

    // i) Length of string
    len = strlen(str1);
    printf("Length of first string: %d\n", len);

    // ii) String reversal
    printf("Reversed first string: ");
    for (i = len - 1; i >= 0; i--) {
        printf("%c", str1[i]);
    }
    printf("\n");

    // iii) Equality check
    if (strcmp(str1, str2) == 0) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }

    // iv) Check palindrome
    len = strlen(str1);
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str1[i] != str1[j]) {
            flag = 0;
            break;
        }
    }
    if (flag == 1) {
        printf("First string is a palindrome.\n");
    } else {
        printf("First string is not a palindrome.\n");
    }

    // v) Check substring
    if (strstr(str1, str2) != NULL) {
        printf("Second string is a substring of first string.\n");
    } else {
        printf("Second string is not a substring of first string.\n");
    }

   
}
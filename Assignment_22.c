    /// Write a menu driven program in C to perform various string operations using in-built functions 
    #include <stdio.h>
    #include <string.h>

    void main() {

        // Assignment 22
        // Program to perform various string operations using built-in string functions (menu driven program)
        // 1. Length
        // 2. Copy
        // 3. Concatenation
        // 4. Comparison

        char str[100];
        int choice;

        printf("Enter a string: ");
        fgets(str, sizeof(str), stdin);
        printf("Menu:\n");
        printf("1. Length\n");
        printf("2. Copy\n");
        printf("3. Concatenation\n");   
        printf("4. Comparison\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Length of the string: %lu\n", strlen(str) - 1); // Subtracting 1 to ignore the newline character
                break;
            case 2: {
                char copy[100];
                strcpy(copy, str);
                printf("Copied string: %s\n", copy);
                break;
            }
            case 3: {
                char str2[100];
                printf("Enter another string to concatenate: ");
                scanf("%s", str2);
                strcat(str, str2);
                printf("Concatenated string: %s\n", str);
                break;
            }
            case 4: {
                char str2[100];
                printf("Enter another string to compare: ");
                scanf("%s", str2);
                int result = strcmp(str, str2);
                if (result == 0) {
                    printf("Strings are equal.\n");
                } else if (result < 0) {
                    printf("First string is less than second string.\n");
                } else {
                    printf("First string is greater than second string.\n");
                }
                break;
            }
            default:
                printf("Invalid choice.\n");
        }
    }
// Problem Statement:
// Write a program to copy content of one file to another file.

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    const char *source_file = "c:\\Users\\Harsh\\Desktop\\New Coding\\C_Programming_FOP\\a.txt";
    const char *destination_file = "c:\\Users\\Harsh\\Desktop\\New Coding\\C_Programming_FOP\\b.txt";
    
    FILE *source, *destination;
    char ch;
    
    // Open source file in read mode
    source = fopen(source_file, "r");
    if (source == NULL) {
        printf("Error: Cannot open source file '%s'\n", source_file);
        return 1;
    }
    
    // Open destination file in write mode
    destination = fopen(destination_file, "w");
    if (destination == NULL) {
        printf("Error: Cannot open destination file '%s'\n", destination_file);
        fclose(source);
        return 1;
    }
    
    // Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    // Close both files
    fclose(source);
    fclose(destination);
    
    printf("File copied successfully from '%s' to '%s'\n", source_file, destination_file);
    
    return 0;
}

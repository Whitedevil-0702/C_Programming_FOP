/// Write Program to Showcase File Handling in C
/// Assignment-21

// Problem Statement:
// Write a program to copy content of one file to another file.
// To understand the concept of file handling in C programming language.
// To learn how to read data from a file and write data to another file.
// To implement file copy operation using standard file handling functions.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to display file handling menu
void displayMenu() {
    printf("\n===== File Handling Operations =====\n");
    printf("1. Copy file using character-by-character approach\n");
    printf("2. Copy file using buffer approach\n");
    printf("3. Display file size and position\n");
    printf("4. Read and display file content\n");
    printf("5. Exit\n");
    printf("====================================\n");
}

// Function to copy file character by character using fgetc() and fputc()
void copyFileCharByChar(const char *source, const char *destination) {
    FILE *source_file, *destination_file;
    char ch;
    int charCount = 0;

    // fopen() - Opens file in specified mode (r=read, w=write)
    source_file = fopen(source, "r");
    if (source_file == NULL) {
        printf("Error: Cannot open source file '%s'\n", source);
        return;
    }

    destination_file = fopen(destination, "w");
    if (destination_file == NULL) {
        printf("Error: Cannot open destination file '%s'\n", destination);
        fclose(source_file);
        return;
    }

    // fgetc() - Reads one character at a time from file
    // fputc() - Writes one character at a time to file
    // EOF - End of File marker
    while ((ch = fgetc(source_file)) != EOF) {
        fputc(ch, destination_file);
        charCount++;
    }

    // fclose() - Closes the file
    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully! Total characters copied: %d\n", charCount);
}

// Function to copy file using buffer approach with fread() and fwrite()
void copyFileWithBuffer(const char *source, const char *destination) {
    FILE *source_file, *destination_file;
    char buffer[1024];  // Buffer size of 1024 bytes
    size_t bytesRead;

    source_file = fopen(source, "rb");  // Open in binary read mode
    if (source_file == NULL) {
        printf("Error: Cannot open source file '%s'\n", source);
        return;
    }

    destination_file = fopen(destination, "wb");  // Open in binary write mode
    if (destination_file == NULL) {
        printf("Error: Cannot open destination file '%s'\n", destination);
        fclose(source_file);
        return;
    }

    // fread() - Reads multiple items from file into buffer
    // Returns number of items successfully read
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), source_file)) > 0) {
        // fwrite() - Writes multiple items from buffer to file
        fwrite(buffer, 1, bytesRead, destination_file);
    }

    // ferror() - Checks if an error occurred during file operation
    if (ferror(source_file)) {
        printf("Error reading source file\n");
    }
    if (ferror(destination_file)) {
        printf("Error writing to destination file\n");
    }

    fclose(source_file);
    fclose(destination_file);

    printf("File copied successfully using buffer method!\n");
}

// Function to display file size and position
void getFileInfo(const char *filename) {
    FILE *file;
    long fileSize;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return;
    }

    // fseek() - Moves file pointer to specified position
    // SEEK_END - Seek to end of file
    fseek(file, 0, SEEK_END);

    // ftell() - Returns current position of file pointer
    fileSize = ftell(file);

    // rewind() - Moves file pointer back to beginning of file
    rewind(file);

    printf("File: %s\n", filename);
    printf("File Size: %ld bytes\n", fileSize);
    printf("Current Position after rewind: %ld\n", ftell(file));

    fclose(file);
}

// Function to read and display file content
void displayFileContent(const char *filename) {
    FILE *file;
    char ch;
    int lineNumber = 1;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Cannot open file '%s'\n", filename);
        return;
    }

    printf("===== Content of %s =====\n", filename);
    printf("%d: ", lineNumber);

    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
        if (ch == '\n') {
            lineNumber++;
            printf("%d: ", lineNumber);
        }
    }

    // feof() - Checks if end of file has been reached
    if (feof(file)) {
        printf("\n(End of File reached)\n");
    }

    fclose(file);
    printf("=======================\n");
}

int main() {
    // Hardcoded file paths for testing
    const char *sourceFile = "C:\\Users\\Harsh\\Desktop\\New Coding\\C_Programming_FOP\\a.txt";
    const char *destFile = "C:\\Users\\Harsh\\Desktop\\New Coding\\C_Programming_FOP\\b.txt";
    int choice;

    printf("===== FILE HANDLING PROGRAM =====\n");
    printf("Source file: %s\n", sourceFile);
    printf("Destination file: %s\n", destFile);
    printf("===================================\n\n");

    while (1) {
        displayMenu();
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                copyFileCharByChar(sourceFile, destFile);
                break;
            case 2:
                copyFileWithBuffer(sourceFile, destFile);
                break;
            case 3:
                getFileInfo(sourceFile);
                break;
            case 4:
                displayFileContent(sourceFile);
                break;
            case 5:
                printf("Exiting program...\n");
                exit(0);
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
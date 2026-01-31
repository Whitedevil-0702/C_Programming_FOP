#include <stdio.h>   
int main() {
    int rows, cols, i, j;
    printf("Enter number of rows: ");
    if (scanf("%d", &rows) != 1 || rows <= 0) return 1;

    printf("Enter number of columns: ");
    if (scanf("%d", &cols) != 1 || cols <= 0) return 1;

    int matrix[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            if (scanf("%d", &matrix[i][j]) != 1) return 1;
        }
    }

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
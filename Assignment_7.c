/// Write a C prgram where input is taken from the user into a matrix and the inverse of that matyrix is given in out put 
#include <stdio.h>

int main() {
    int i, j;
    float matrix[2][2], inverse[2][2];
    float determinant;

    // Input the matrix
    printf("Enter the elements of 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%f", &matrix[i][j]);
        }
    }

    // Display the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%8.2f\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Calculate determinant
    determinant = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

    // Check if matrix is invertible
    if (determinant == 0) {
        printf("\nMatrix is singular (determinant = 0). Inverse does not exist.\n");
        return 0;
    }

    // Calculate inverse
    inverse[0][0] = matrix[1][1] / determinant;
    inverse[0][1] = -matrix[0][1] / determinant;
    inverse[1][0] = -matrix[1][0] / determinant;
    inverse[1][1] = matrix[0][0] / determinant;

    // Display the inverse matrix
    printf("\nInverse Matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%8.2f\t", inverse[i][j]);
        }
        printf("\n");
    }

    return 0;
}
 
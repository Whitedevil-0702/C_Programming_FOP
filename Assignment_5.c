///Finding the saddle point in a 2x2 matrix
#include <stdio.h>

int main() {
    int matrix[2][2];
    int i, j, k;
    int isSaddlePoint;
    int foundSaddle = 0;

    // Input the matrix
    printf("Enter the elements of 2x2 matrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Display the matrix
    printf("\nMatrix:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // Find saddle points
    printf("\nSaddle Points: ");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            isSaddlePoint = 1;

            // Check if element is minimum in its row
            for (k = 0; k < 2; k++) {
                if (matrix[i][k] < matrix[i][j]) {
                    isSaddlePoint = 0;
                    break;
                }
            }

            // Check if element is maximum in its column
            if (isSaddlePoint) {
                for (k = 0; k < 2; k++) {
                    if (matrix[k][j] > matrix[i][j]) {
                        isSaddlePoint = 0;
                        break;
                    }
                }
            }

            // If it's a saddle point, print it
            if (isSaddlePoint) {
                printf("(%d, %d)=%d ", i, j, matrix[i][j]);
                foundSaddle = 1;
            }
        }
    }

    if (!foundSaddle) {
        printf("No saddle point exists");
    }

    printf("\n");
    return 0;
}
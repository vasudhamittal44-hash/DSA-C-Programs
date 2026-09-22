#include <stdio.h>

int main() {

    int a[10][10], b[10][10], difference[10][10];
    int rows, columns;
    int i, j;

    // Enter rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns);

    // Enter first matrix
    printf("Enter elements of first matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Enter second matrix
    printf("Enter elements of second matrix:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Subtract the matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            difference[i][j] = a[i][j] - b[i][j];
        }
    }

    // Display result
    printf("Difference of the matrices:\n");

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int rows = 2;
    int columns = 2;
    int matrix1[2][2] = {
        {1, 2},
        {3, 4}
    };

    int matrix2[2][2] = {
        {5, 6},
        {7, 8}
    };
    int sumMatrix[2][2];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            sumMatrix[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            printf("%d\t", sumMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

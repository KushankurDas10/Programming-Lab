#include <stdio.h>

int main() {
    int r = 2; 
    int c = 3; 

    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int tr[3][2];

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            tr[j][i] = mat[i][j];
        }
    }
    printf("\nTransposed Matrix (%dx%d):\n", c, r);
    for (int i = 0; i < c; i++) { 
        for (int j = 0; j < r; j++) {
            printf("%d\t", tr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

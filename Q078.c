#include <stdio.h>

int main() {
    int rows , cols;

    if (scanf("%d %d" , &rows , &cols) != 2) {
        return 0;
    }

    int matrix[rows][cols];
    int diagonalSum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d" , &matrix[i][j]);

            if (i == j) {
                diagonalSum +=  matrix[i][j];
            }
        }
    }
    printf("%d\n" , diagonalSum);

    return 0;

}

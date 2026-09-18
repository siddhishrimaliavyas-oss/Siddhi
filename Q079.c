#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows , cols;

    if (scanf("%d %d" , &rows, &cols) != 2) {
        return 0;
    }

    int **matrix = (int **)malloc(rows * sizeof(int*));
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int *)malloc(cols * sizeof(int));
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++) {
            scanf("%d" , &matrix[i][j]);
        }
    } 

    int total_diagonals = rows+cols-1;

    for (int d = 0; d < total_diagonals; d++) {
        if (d%2 == 1) {

            int r = (d<cols) ? 0 : d-cols+1;
            int c = (d<cols) ? d : cols-1;

            while (r<rows && c>=0) {
                printf("%d ", matrix[r][c]);
                r++;
                c--;
            }
        } else {
            int r = (d<rows) ? d: rows-1;
            int c = (d<rows) ? 0: d-rows+1;

            while (r>= 0 && c<cols) {
                printf("%d ", matrix[r][c]);
                r--;
                c++;
            }
        }
    }
    printf("\n");

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;

}

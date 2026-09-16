#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows , cols;

    if (scanf("%d %d" , &rows , &cols) != 2){
        return 0;
    }

    int matrix[rows][cols];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j< cols; j++){
            scanf ("%d" , &matrix[i][j]);
        }
    }

    if (rows != cols){
        printf("False\n");
        return 0;
    }

    bool isSymmetric = true;

    for (int i = 0; i < rows; i++){
        for ( int j = 0; j < cols; j++){
            if (matrix[i][j] != matrix[j][i]){
                isSymmetric = false;
                break;
            }
        }
        if (!isSymmetric){
            break;
        }
    }

    if (isSymmetric) {
        printf("True\n");
    } else {
        printf("False\n");
    }


    return 0;

}

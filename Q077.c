#include <stdio.h>
#include <stdbool.h>

int main() {
    int rows, cols;

    if (scanf("%d %d" , &rows, &cols) != 2){
        return 0;
    }

    int matrix[rows][cols];
    int diagonal[rows];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            scanf ("%d" , &matrix[i][j]);
            if (i == j){
                diagonal[i] = matrix[i][j];
            }
        }
    }

    bool is_distinct = true;

    for (int i = 0; i < rows; i++) {
        for (int j = i+1; j < rows; j++){
            if (diagonal[i] == diagonal[j]) {
                is_distinct = false;
                break;
            }
        }
        if (!is_distinct){
            break;
        }
    }

    if (is_distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }

    return 0;

}

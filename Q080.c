#include <stdio.h>
#include <stdlib.h>
int main() {
    int r1,c1,r2,c2;

    if (scanf("%d %d" , &r1, &c1) != 2)return 0;

    int **mat1 = (int **)malloc(r1 *sizeof(int *));
    for (int i = 0; i<r1; i++) {
        mat1[i]=(int *)malloc(c1*sizeof(int));
        for (int j=0; j<c1; j++) {
            scanf("%d" , &mat1[i][j]);
        }
    }

    if (scanf("%d %d" , &r2, &c2) != 2)return 0;
    int **mat2 = (int **)malloc(r2 * sizeof(int *));
    for (int i=0; i<r2; i++) {
        mat2[i]=(int *)malloc(c2*sizeof(int));
        for (int j=0; j<c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    int **result = (int **)calloc(r1, sizeof(int *));
    for (int i=0; i<r1; i++) {
        result[i]=(int *)calloc(c2, sizeof(int));
    }

    for (int i = 0; i<r1; i++) {
        for (int j =0; j<c2; j++) {
            for (int k=0; k<c1; k++) {
                result[i][j] += mat1[i][k]*mat2[k][j];
            }
        }
    }

    for (int i=0; i<r1; i++) {
        for (int j=0; j<c2; j++) {
            printf("%d " , result[i][j]);
        }
        printf("\n");
    }

    for (int i=0; i<r1; i++) free(mat1[i]);
    free(mat1);

    for (int i=0; i<r2; i++) free(mat2[i]);
    free(mat2);

    for (int i=0; i<r1; i++) free(result[i]);
    free(result);

    return 0;

}

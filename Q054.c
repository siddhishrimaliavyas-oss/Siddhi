#include <stdio.h>

int main() {
    int total_rows = 4;
    for (int i = 1; i <= total_rows ; i++){
        for (int j = 1; j <= total_rows - i; j++){
            printf (" ");
        }
        for (int j = 1 ; j <= (2*i-1); j++){
            printf ("*");
        }
        printf("\n");
    }
    for (int i = total_rows-1 ; i >= 1; i--){
        for (int j = 1; j <= total_rows - i; j++){
            printf (" ");
        }
        for (int j = 1 ; j <= (2*i-1); j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;

}

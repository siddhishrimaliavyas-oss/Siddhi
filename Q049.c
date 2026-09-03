#include <stdio.h>

int main() {
    int rows = 5;
    for (int i = rows; i >= 1; i--){
        for ( int j = i; j <= rows; j++){
            printf ("%d" , j);
        }
        printf ("\n");
    }

    return 0;

}

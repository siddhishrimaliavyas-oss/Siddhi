#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++){
        int stars = 2*i-1;
        for (int j = 1; j <= stars; j++){
            printf("*'\n");
        }
        printf("\n");
    }
    for (int i = 2; i>=1; i--){
        int stars = 2*i-1;
        for (int j = 1; j <= stars; j++){
            printf ("* \n");
        }
        if (i > 1){
            printf ("\n");
        }
    }

    return 0;

}

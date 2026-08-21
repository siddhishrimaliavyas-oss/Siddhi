#include <stdio.h>

int main() {
    int a , b;
    printf ("Enter number of units consumed:");
    scanf ("%d" , & a);
    if (a <= 100){
        b = a*5;
        printf ("Bill : %d" , b);
    }else if (a <= 200){
        b = a*7 - 200;
        printf ("Bill : %d" , b);
    }else if (a <= 300){
        b = a*10 - 800;
        printf ("Bill : %d" , b);
    }else {
        b = a*12 - 1400;
        printf ("Bill : %d" , b);
    }

    return 0;

}

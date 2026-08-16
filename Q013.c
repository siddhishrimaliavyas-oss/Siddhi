#include <stdio.h>

int main() {
    int y;
    printf ("Enter a year:");
    scanf ("%d" , & y);
    if (y % 400 == 0){
        printf ("%d is a leap year . \n" , y);

    }
    else if (y % 100 == 0){
        printf ("%d is not a leap year.\n" , y);

    }
    else if (y % 4 == 0 ){
        printf ("%d is leap year. \n", y);
    }
    else {
        printf ("%d is not a leap year. \n" , y);
    }

    return 0;

}

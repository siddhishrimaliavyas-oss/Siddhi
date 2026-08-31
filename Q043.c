#include <stdio.h>

int main() {
    int n , on , r , sum = 0;
    printf ("Enter a number:");
    scanf ("%d" , & n);
    on = n;
    while ( n > 0){
        r = n % 10;
        int fact = 1;
        int i = 1;
        while (i <= r){
            fact = fact*i;
            i++;
        }
        sum = sum + fact;
        n = n/10;
    }
    if (sum == on){
        printf ("%d is a strong number. \n" , on);
    } else {
        printf ("%d is not a strong number. \n" , on);
    }

    return 0;

}

#include <stdio.h>

int main() {
    int n , on , rn = 0, r;
    printf ("Enter an integer:");
    scanf ("%d" , & n);
    on = n;
    while (n>0){
        r = n % 10;
        rn = rn*10 + r;
        n = n/10;
    }
    if (on == rn){
        printf ("%d is a palindrome. \n" , on);
    }else {
        printf ("%d is not a palindrome.\n" , on);
    }

    return 0;

}

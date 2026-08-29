#include <stdio.h>

int main() {
    int n , d;
    int product = 1;
    int has_odd = 0;
    printf ("Enter an integer number :");
    scanf ("%d" , & n);
    if (n < 0){
        n = -n;
    }
    while (n > 0){
        d = n % 10;
        if (d % 2 != 0){
            product = product*d;
            has_odd = 1;
        }
        n = n / 10;
    }
    if (has_odd == 1){
        printf ("The product of the odd digits is : %d \n" , product);
    } else {
        printf ("The number contains no odd digits (assume 1). Product is : 1\n");
    }

    return 0;

}

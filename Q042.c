#include <stdio.h>

int main() {
    int n , s = 0;
    printf ("Enter a positive integer:");
    scanf ("%d" , & n);
    for (int i = 1; i < n; i++) {
        if (n % i == 0){
            s += i;
        }
    }
    if (s == n && n > 0) {
        printf ("%d  is a perfect number. \n" , n);
    } else {
        printf ("%d is not a perfect number. \n" , n);
        
    }

    return 0;

}

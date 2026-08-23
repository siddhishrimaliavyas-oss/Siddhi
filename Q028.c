#include <stdio.h>

int main() {
    int n;
    long long product = 1;
    printf ("Enter the value of n:");
    scanf ("%d" , & n);
    if (n < 2){
        printf ("No even numbers found between 1 and %d. \n" , n);
        return 0;
    }
    for (int i = 2; i <= n; i += 2){
        product = product*i;
    }
    printf ("The product of even numbers is : %lld \n" , product);

    return 0;

}

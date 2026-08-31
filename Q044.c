#include <stdio.h>

int main() {
    int n;
    scanf ("%d" , & n);
    double sum = 1.65;
    int i = 1;
    while (i <= n){
        sum = sum + 0.55;
        i++;
    }
    printf ("Approximate sum: %.1lf . \n" , sum);

    return 0;

}

#include <stdio.h>

int main() {
    int p , r , t ,  A , SI , CI;
    printf ("Enter the principal:");
    scanf ("%d" , & p);
    printf ("Enter rate:");
    scanf ("%d" , & r);
    printf ("Enter the duration of time in years:");
    scanf ("%d" , & t);
    SI = p*r*t/100;
    printf ("Simple interest for %d over %d years at a rate of %d percent is %d \n" , p , t , r , SI );
    A = p * pow ((1 + r / 100.0), t );
    CI = A - p;
    printf ("Compound interest for %d over %d year at a rate of %d percentage is %d \n" , p , t , r , CI);
    

    return 0;

}

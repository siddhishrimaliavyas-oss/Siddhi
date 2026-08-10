#include <stdio.h>

int main() {
    int a , b , sum , diff , pro , quo ;
    printf ("Enter first number:");
    scanf("%d" , & a);
    printf ("Enter second number:");
    scanf ("%d" , & b);
    sum = a+b;
    printf ("Sum of %d and %d is %d \n", a , b , sum);
    diff = a-b;
    printf ("Difference of %d and %d is %d \n", a , b , diff);
    pro = a*b;
    printf ("Product of %d and %d is %d \n", a, b , pro);
    quo = a/b;
    printf ("Quotient of %d and %d is %d \n", a, b, quo);

    return 0;

}

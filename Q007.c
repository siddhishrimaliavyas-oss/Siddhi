#include <stdio.h>

int main() {
    int a , b;
    printf ("Enter first number:");
    scanf ("%d" , & a);
    printf ("Enter second number:");
    scanf ("%d" , & b);
    printf("Numbers before swaping: a = %d  , b = %d \n", a , b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf ("Numbers after swaping: a = %d , b = %d", a , b);


    return 0;

}

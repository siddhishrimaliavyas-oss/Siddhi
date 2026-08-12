#include <stdio.h>

int main() {
    int a , b , c;
    printf ("Enter the first number:");
    scanf ("%d" , & a);
    printf ("Enter the second number:");
    scanf ("%d" , & b);
    printf ("Before swap : a = %d , b = %d \n" , a , b);

    c = a;
    a = b;
    b = c;
    
    printf ("After swap : a = %d , b = %d \n" , a , b );

    return 0;

}

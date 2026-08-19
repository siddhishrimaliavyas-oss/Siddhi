#include <stdio.h>

int main() {
    int a , b , c;
    printf ("Enter the first side:");
    scanf ("%d" , & a);
    printf ("Enter the second side:");
    scanf ("%d" , & b);
    printf ("Enter the third side:");
    scanf ("%d" , & c);
    if ( a == b && b == c){
        printf ("EQUILATERAL TRIANGLE");
    } else if (a == b && b != c){
        printf ("ISOSCLELES TRIANGLE");
    }else if (a == c && b != c){
        printf ("ISOSCELES TRIANGLE");
    }else if (b == c && a != c){
        printf ("ISOSCELES TRIANGLE");
    }else{
        printf ("SCALENE TRIANGLE");
    }

    return 0;

}

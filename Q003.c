#include<stdio.h>

int main() {
    int l , b, area , peri;
    printf ("Enter the length of rectangle:");
    scanf ("%d" , & l);
    printf ("Enter the breadth of rectangle:");
    scanf ("%d" , & b);
    peri = 2*l+2*b;
    printf ("The perimeter of the rectangle is %d \n" , & peri);
    area = l*b;
    printf ("The area of given rectangle is %d \n" , & area);

    return 0;

}

#include <stdio.h>
# define PI 3.14
int main() {
    float r , A , C;
    printf ("Enter the radius of circle:");
    scanf ("%f" , & r);
    A = PI*r*r;
    printf ("Area of circle is %f \n" , A);
    C = 2*PI*r;
    printf ("Circumference of circle is %f \n" , C);

    return 0;

}

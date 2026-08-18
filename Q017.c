#include <stdio.h>
#include <math.h>
int main (){
    double a , b , c;
    double D , r1 , r2 , rp , ip;
    printf ("Enter the cofficients a , b and c :");
    scanf ("%lf %lf %lf" , & a , & b , & c);
    if ( a == 0){
        printf ("The value of 'a' cannot be 0 in a quadratic equation.\n");
        return 1;
        }
        D = ( b * b ) - ( 4 * a * c );
        if ( D > 0 ){
            r1 = (-b + sqrt(D))/(2*a);
            r2 = (-b + sqrt(D))/(2*a);
            printf ("Category:  Real and Different Roots\n ");
            printf ("Root 1 = %.2lf\n" , r1);
            printf ("Root 2 = %.2lf\n" , r2);
        }
        else if (D == 0){
            r1 = -b/(2*a);
            printf ("Category : Real and Equal Roots\n");
            printf ("Root 1 = Root 2 = %.2lf\n", r1);
        }
        else{
            rp = -b/(2*a);
            ip = sqrt(-D)/(2*a);
            printf ("Category : Complex Roots\n");
        
        }





    return 0;

}

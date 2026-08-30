#include <stdio.h>
#include <math.h>
int main() {
    int num , fd , ld , d , sn;
    printf ("Enter any number:");
    scanf ("%d" , & num);
    ld = num%10;
    d = (int)log10(num);
    fd = num / pow(10,d);
    sn = ld*pow(10, d);
    sn += num%(int)pow(10, d);
    sn -= ld;
    sn += fd;
    printf ("Original number : %d\n", num);
    printf("Swapped numbern: %d \n" , sn);
    
    

    return 0;

}

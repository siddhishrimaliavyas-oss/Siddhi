#include <stdio.h>

int main() {
    int a , f , t , th  ;
    printf ("Enter number of days");
    scanf ("%d" , & a);
    if (a <= 5){
        f = a*2;
        printf ("fine is %d rupees" , f);
    }else if (a <= 10){
        t = a*4 - 10;
        printf ("fine is %d rupees" , t);
    }else if (a <= 30){
        th = a*6 - 30;
        printf ("fine is %d rupees" , th);
    }else {
        printf ("membership is canceled");
    }
    

    return 0;

}

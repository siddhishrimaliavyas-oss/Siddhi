#include <stdio.h>

int main() {
    int TS , H , M , S , R;
    printf ("Enter the time in seconds:");
    scanf ("%d" ,& TS);
    H = TS / 3600;
    R = TS % 3600;
    M = R / 60;
    S = R % 60;
    printf ("Formatted time : %d:%d:%d \n" , H , M , S);


    return 0;

}

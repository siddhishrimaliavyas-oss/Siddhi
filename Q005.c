#include <stdio.h>

int main() {
    float C , F;
    printf ("Enter the temperature in celcius:");
    scanf ("%f" , & C);
    F = C*1.8+32;
    printf ("Temperature in fahrenheit is %f" , F);

    return 0;

}

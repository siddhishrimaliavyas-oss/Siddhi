#include <stdio.h>

int main() {
    char str[100];
    int i = 0;
    printf ("Input 1: \n");
    scanf("%s" , str);
    while (str[i] != '\0') {
        if (str[i] > 'a' && str[i] <= 'z') {
            str[i] = str[i]-32;
        }
        i++;
    }
    printf ("\n Output 1: \n %s \n" , str);

    return 0;

}

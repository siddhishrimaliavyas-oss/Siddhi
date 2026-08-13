#include <stdio.h>
 
int main() { 
    int n;
    if (scanf ("%d", &n) != 1){
        return 1;
    }
    int sum = n*(n+1)/2;
    printf ("%d\n", sum);
    return 0;

}

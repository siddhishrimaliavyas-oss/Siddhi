#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int current_odd = 1;
    scanf ("%d" , & n);
    for (int i = 0; i < n; i++){
        sum += current_odd;
        current_odd += 2;
    }
    printf ("%d\n" , sum);

    return 0;

}

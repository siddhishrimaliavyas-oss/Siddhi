#include <stdio.h>

int main() {
    int n , i;
    int even_count = 0;
    int odd_count = 0;
    scanf ("%d" , &n);
    int arr[n];
    for (i = 0; i < n; i++){
        scanf ("%d" , & arr[i]);
    }
    for (i = 0 ; i < n; i++){
        if (arr[i]%2 == 0){
            even_count++;
        }
        else {
            odd_count++;
        }
    }
    printf ("Even = %d, Odd = %d \n" , even_count , odd_count);


    return 0;

}

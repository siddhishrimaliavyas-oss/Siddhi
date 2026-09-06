#include <stdio.h>

int main() {
    int n , i;
    scanf("%d", & n);
    int arr[100];
    for (i = 0; i < n; i++){
        scanf("%d" , & arr[i]);
    }
    for (i = 0 ; i < n; i++){
        printf ("%d " , arr[i]);
    }
    printf("\n");

    return 0;

}

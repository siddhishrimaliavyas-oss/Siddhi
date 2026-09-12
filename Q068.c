#include <stdio.h>

int main() {
    int arr[100];
    int n , i , pos;
    scanf ("%d" , &n);
    for (i=0; i<n; i++){
        scanf("%d" , &arr[i]);
    }
    scanf ("%d" , &pos);
    for (i=pos; i<n-1; i++){
        arr[i] = arr[i+1];
    }
    n--;
    for (i=0; i<n; i++){
        printf("%d " , arr[i]);
    }


    return 0;

}

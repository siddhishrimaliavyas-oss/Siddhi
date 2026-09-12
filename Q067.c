#include <stdio.h>

int main() {
    int arr[100];
    int n , i , pos , value;
    scanf ("%d" , &n);
    for (i = 0; i < n; i++){
        scanf("%d" , &arr[i]);
    }
    scanf ("%d %d" , &pos , & value);
    for (i = n-1; i >= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = value;
    n++;
    for(i=0; i<n; i++){
        printf("%d " , arr[i]);
    }

    return 0;

}

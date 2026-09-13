#include <stdio.h>

int main() {
    int n , k;
    printf ("Enter the number of elements: ");
    scanf ("%d" , &n);
    int arr[n];
    int temp[n];
    printf ("Enter %d elements: " , n);
    for (int i =0; i<n; i++){
        scanf("%d" , &arr[i]);
    }
    printf("Enter the number of positions to rotate (k): ");
    scanf("%d" , &k);
    k=k%n;
    for(int i=0; i<n; i++){
        int new_position = (i+k)%n;
        temp[new_position] = arr[i];
    }
    printf("Rotated array: ");
    for(int i = 0; i<n; i++ ){
        printf("%d " , temp[i]);
    }
    printf("\n");

    return 0;

}

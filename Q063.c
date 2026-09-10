#include <stdio.h>

int main() {
    int n1 , n2;
    scanf ("%d" , &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++){
        scanf ("%d" , &arr1[i]);
    }
    scanf ("%d" , &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++){
        scanf ("%d" , &arr2[i]);
    }
    int mergedSized = n1+n2;
    int mergedArr[mergedSized];
    for (int i = 0; i < n1; i++){
        mergedArr[i] = arr1[i];
    }
    for (int i = 0; i < n2; i++){
        mergedArr[n1+i] = arr2[i];
    }
    for (int i = 0; i < mergedSized; i++){
        printf ("%d " , mergedArr[i]);
    }
    printf("\n");


    return 0;

}

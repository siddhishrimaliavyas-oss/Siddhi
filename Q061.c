#include <stdio.h>

int main() {
    int n ,target;
    scanf("%d" , &n);
    int arr[n];
    for (int i = 0; i < n; i++){
        scanf("%d" , &arr[i]);
    }
    scanf("%d" , &target);
    int foundIndex = -1;
    for (int i = 0; i < n; i++){
        if (arr[i] == target){
            foundIndex = i;
            break;
        }
    }
    if (foundIndex != -1){
        printf("Found at index %d \n" , foundIndex);
    } else {
        printf("-1 \n");
    }

    return 0;

}

#include <stdio.h>

int main() {
    int n;
    if (scanf("%d" , &n) != 1)return 0;
    int arr[n];
    for (int i = 0; i < n; i++){
        if (scanf("%d" , &arr[i]) != 1)return 0;
    }
    int target;
    if (scanf("%d" , &target) != 1) return 0 ;

    int low = 0;
    int high = n- 1;
    int found_index = -1;
    while (low <= high){
        int mid = low+(high-low)/2;
        if (arr[mid] == target){
            found_index = mid;
            break;
        }
        else if (arr[mid] < target){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    if (found_index != -1){
        printf ("Found at index : %d \n" , found_index);
    } else {
        printf ("-1 \n");
    }
}
#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int low=0;
    int high=n-1;
    int ans=-1;

    while (low<=high) {
        int mid=low+(high-low/2);

        if (arr[mid]>=x) {
            ans = mid;
            high=mid-1;
        } else {
            low=mid+1;
        }
    }
    return ans;
}

int main() {
    int n,x;

    printf("Enter number of elements in the array: ");
    if (scanf("%d", &n)!= 1||n<=0) {
        return 0;
    }

    int arr[n];

    printf("\nEnter %d sorted elements:", n);
    for (int i=0;i<n;i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

    int result=findCeil(arr,n,x);
    printf("Output:%d\n", result);

    return 0;

}

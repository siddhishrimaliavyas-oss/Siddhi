#include <stdio.h>

int findFirst(int nums[], int n, int target) {
    int low = 0, high = n-1;
    int first = -1;

    while (low<=high) {
        int mid = low+(high-low)/2;

        if (nums[mid]==target) {
            first = mid;
            high = mid-1;

        } else if (nums[mid]<target) {
            low=mid+1;
        } else {
            high = mid-1;
        }
    }
    return first;
}

int findLast (int nums[], int n, int target) {
    int low = 0, high = n-1;
    int last = -1;

    while (low<=high) {
        int mid= low+(high-low)/2;

        if (nums[mid]==target) {
            last=mid;
            low=mid+1;
        } else if (nums[mid]<target) {
            low=mid+1;
        } else {
            high = mid-1;
        }
    }
    return last;
}
int main() {
    int n, target;

    printf("Enter number of elements: ");
    if (scanf("%d", &n)!= 1 || n<=0) return 1;

    int nums[n];
    printf("Enter the sorted elements: ");
    for (int i=0; i<n; i++) {
        if (scanf("%d", &nums[i])!= 1)return 1;
    }

    printf ("Enter target: ");
    if (scanf("%d", &target)!=1)return 1;

    int firstIndex=findFirst(nums,n,target);
    int lastIndex=findLast(nums,n,target);

    printf("%d, %d\n", firstIndex, lastIndex);

    return 0;

}

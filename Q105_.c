#include <stdio.h>
#include <stdlib.h>


int findMajorityElement(int nums[], int n) {
    int candidate = -1;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    
    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actualCount++;
        }
    }

    
    if (actualCount > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;


    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    
    int *nums = (int *)malloc(n * sizeof(int));
    if (nums == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }


    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    
    int result = findMajorityElement(nums, n);
    
    printf("Output: %d\n", result);
    free(nums);

    return 0;
}

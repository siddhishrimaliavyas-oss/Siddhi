#include <stdio.h>
#include <stdlib.h>

void productExceptSelf(int* nums, int numsSize, int* answer) {
    int prefix = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    
    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
}

int main() {
    int n;
    
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }
    
    int* nums = (int*)malloc(n * sizeof(int));
    int* answer = (int*)malloc(n * sizeof(int));
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    productExceptSelf(nums, n, answer);
    
    printf("Output array: [");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(",");
        }
    }
    printf("]\n");
    
    free(nums);
    free(answer);
    
    return 0;
}

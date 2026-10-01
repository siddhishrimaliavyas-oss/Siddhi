#include <stdio.h>

int pivotIndex(int* nums, int numsSize) {
    int total_sum = 0;
    int left_sum = 0;

    for (int i = 0; i<numsSize; i++) {
        total_sum += nums[i];
    }

    for (int i=0; i<numsSize; i++) {
        int right_sum = total_sum - left_sum - nums[i];

        if (left_sum == right_sum) {
            return i;
        }

        left_sum += nums[i];
    }

    return -1;
}

int main() {
    int size;

    printf ("Enter the number of elements: ");
    if (scanf ("%d", &size) != 1 || size <= 0) {
        printf("Invalid array size. \n");
        return 1;
    }

    int nums[size];
    printf("Enter %d integers seprated by spaces: ", size);
    for (int i=0; i<size; i++) {
        scanf("%d", &nums[i]);
    }

    int result = pivotIndex(nums, size);

    printf("Output: %d\n", result);

    return 0;

}

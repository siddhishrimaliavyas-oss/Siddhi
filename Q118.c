#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1) return 1;

    int nums[100];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) return 1;
    }

    int min_val = nums[0];
    int actual_sum = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] < min_val) {
            min_val = nums[i];
        }
        actual_sum += nums[i];
    }

    int expected_sum = 0;
    for (int i = 0; i <= n; i++) {
        expected_sum += (min_val + i);
    }

    int missing_number = expected_sum - actual_sum;

    printf("%d\n", missing_number);

    return 0;
}

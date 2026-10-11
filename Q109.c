#include <stdio.h>

int main() {
    int n, k;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the subarray size (k): ");
    if (scanf("%d", &k) != 1 || k <= 0 || k > n) {
        printf("Invalid value of k. It must be between 1 and %d.\n", n);
        return 1;
    }

    int current_sum = 0;
    for (int i = 0; i < k; i++) {
        current_sum += arr[i];
    }

    int max_sum = current_sum;

    for (int i = k; i < n; i++) {
        current_sum += arr[i] - arr[i - k];
        
        if (current_sum > max_sum) {
            max_sum = current_sum;
        }
    }

    printf("Maximum sum of a subarray of size %d is: %d\n", k, max_sum);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

// Function to calculate the product of array except self
void productExceptSelf(int nums[], int n, int answer[]) {
    // Pass 1: Calculate prefix products and store them in the answer array
    int left_product = 1;
    for (int i = 0; i < n; i++) {
        answer[i] = left_product;
        left_product *= nums[i];
    }

    // Pass 2: Calculate suffix products and multiply with the prefix products
    int right_product = 1;
    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= right_product;
        right_product *= nums[i];
    }
}

int main() {
    int n;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    // Dynamically allocate memory for the input and answer arrays
    int* nums = (int*)malloc(n * sizeof(int));
    int* answer = (int*)malloc(n * sizeof(int));

    if (nums == NULL || answer == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Take array elements from the user
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Process the array
    productExceptSelf(nums, n, answer);

    // Print the output array
    printf("\nOutput: [");
    for (int i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");

    // Free memory
    free(nums);
    free(answer);

    return 0;
}

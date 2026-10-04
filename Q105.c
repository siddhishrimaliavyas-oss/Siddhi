#include <stdio.h>

void findNextGreaterElement(int arr[], int n) {
    printf("Output: ");
    
    // Nested loops to find the next greater element for each item
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Default if no greater element is found on the right
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j]; // Found the nearest greater element on the right
                break; // Break the inner loop immediately
            }
        }
        
        // Print the output in a comma-separated format
        if (nextGreater == -1) {
            printf("\"-1\"");
        } else {
            printf("%d", nextGreater);
        }
        
        // Add a comma and space for all elements except the last one
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Ask user for the size of the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    // Ask user to enter the array elements
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Call the function to process and print the result
    findNextGreaterElement(arr, n);

    return 0;
}



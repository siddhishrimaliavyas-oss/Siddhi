#include <stdio.h>

void findPreviousGreater(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int prevGreater = -1;
        
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prevGreater = arr[j];
                break;
            }
        }
        
        if (prevGreater == -1) {
            printf("\"-1\"");
        } else {
            printf("%d", prevGreater);
        }
        
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main() {
    int n;

    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    findPreviousGreater(arr, n);

    return 0;
}

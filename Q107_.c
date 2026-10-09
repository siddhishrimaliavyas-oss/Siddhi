#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Output: ");
    for (int i = 0; i < n; i++) {
        int prev_greater = -1;

        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break;
            }
        }

        if (prev_greater == -1) {
            printf("\"-1\"");
        } else {
            printf("%d", prev_greater);
        }

        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    free(arr);

    return 0;
}

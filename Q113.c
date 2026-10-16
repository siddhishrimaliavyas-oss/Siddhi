#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, k;

    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 1;
        }
    }

    if (scanf("%d", &k) != 1 || k < 1 || k > n) {
        free(arr);
        return 1;
    }

    qsort(arr, n, sizeof(int), compare);

    printf("%d\n", arr[k - 1]);

    free(arr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, k;

    if (scanf("%d", &n) != 1) return 0;

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            free(arr);
            return 0;
        }
    }

    if (scanf("%d", &k) != 1) {
        free(arr);
        return 0;
    }

    int *queue = (int *)malloc(n * sizeof(int));
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            queue[rear++] = i;
        }

        if (i >= k - 1) {
            while (front < rear && queue[front] < i - k + 1) {
                front++;
            }

            if (front < rear) {
                printf("%d ", arr[queue[front]]);
            } else {
                printf("0 ");
            }
        }
    }
    printf("\n");

    free(arr);
    free(queue);
    return 0;
}


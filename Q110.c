#include <stdio.h>
#include <stdlib.h>

void maxSlidingWindow(int* arr, int n, int k) {
    int* deque = (int*)malloc(n * sizeof(int));
    int front = 0, rear = 0;

    for (int i = 0; i < n; i++) {
        if (front < rear && deque[front] < i - k + 1) {
            front++;
        }

        while (front < rear && arr[deque[rear - 1]] <= arr[i]) {
            rear--;
        }

        deque[rear++] = i;

        if (i >= k - 1) {
            printf("%d ", arr[deque[front]]);
        }
    }
    printf("\n");
    free(deque);
}

int main() {
    int n, k;
    if (scanf("%d", &n) != 1) return 0;

    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    if (scanf("%d", &k) != 1) return 0;

    if (k > n) k = n;

    maxSlidingWindow(arr, n, k);

    free(arr);
    return 0;
}

#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 0;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 0;
        }
    }

    int max_so_far = arr[0];
    int curr_max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > curr_max + arr[i]) {
            curr_max = arr[i];
        } else {
            curr_max = curr_max + arr[i];
        }

        if (curr_max > max_so_far) {
            max_so_far = curr_max;
        }
    }

    printf("%d\n", max_so_far);

    return 0;
}

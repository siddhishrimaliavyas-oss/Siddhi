#include <stdio.h>

int main() {
    int n;
    
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    for (int i = 0; i < n; i++) {
        int next_greater = -1;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                next_greater = arr[j];
                break;
            }
        }
        
        if (i == n - 1) {
            printf("%d", next_greater);
        } else {
            printf("%d, ", next_greater);
        }
    }
    
    printf("\n");
    return 0;
}

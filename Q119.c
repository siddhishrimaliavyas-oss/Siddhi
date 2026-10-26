#include <stdio.h>

int main() {
    int n;

    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1) return 1;

    int nums[100];
    int visited[100000] = {0};
    int repeated_element = -1;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &nums[i]) != 1) return 1;
        
        if (visited[nums[i]] == 1) {
            repeated_element = nums[i];
        }
        visited[nums[i]] = 1;
    }

    printf("%d\n", repeated_element);

    return 0;
}

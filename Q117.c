#include <stdio.h>

int main() {
    int m, n;
    int nums1[100];
    int nums2[100];
    int merged[200];

    printf("Enter the size of the first array: ");
    if (scanf("%d", &m) != 1) return 1;
    
    printf("Enter %d elements for nums1:\n", m);
    for (int i = 0; i < m; i++) {
        printf("nums1[%d] = ", i);
        if (scanf("%d", &nums1[i]) != 1) return 1;
    }

    printf("\nEnter the size of the second array: ");
    if (scanf("%d", &n) != 1) return 1;
    
    printf("Enter %d elements for nums2:\n", n);
    for (int i = 0; i < n; i++) {
        printf("nums2[%d] = ", i);
        if (scanf("%d", &nums2[i]) != 1) return 1;
    }

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (nums1[i] <= nums2[j]) {
            merged[k++] = nums1[i++];
        } else {
            merged[k++] = nums2[j++];
        }
    }

    while (i < m) {
        merged[k++] = nums1[i++];
    }

    while (j < n) {
        merged[k++] = nums2[j++];
    }

    printf("\nMerged sorted array:\n");
    for (int l = 0; l < m + n; l++) {
        printf("%d ", merged[l]);
    }
    printf("\n");

    return 0;
}

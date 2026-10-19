// Q117: Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter size of first sorted array: ");
    if (scanf("%d", &m) != 1) return 0;
    int a[100];
    printf("Enter elements: ");
    for (int i = 0; i < m; i++) scanf("%d", &a[i]);

    printf("Enter size of second sorted array: ");
    scanf("%d", &n);
    int b[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &b[i]);

    int merged[200], i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (a[i] <= b[j]) merged[k++] = a[i++];
        else merged[k++] = b[j++];
    }
    while (i < m) merged[k++] = a[i++];
    while (j < n) merged[k++] = b[j++];

    printf("Merged sorted array: ");
    for (int idx = 0; idx < k; idx++) printf("%d ", merged[idx]);
    printf("\n");
    return 0;
}

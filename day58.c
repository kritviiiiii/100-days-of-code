// Q108: Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    int nums[100], ans[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int prefix = 1;
    for (int i = 0; i < n; i++) {
        ans[i] = prefix;
        prefix *= nums[i];
    }
    int suffix = 1;
    for (int i = n - 1; i >= 0; i--) {
        ans[i] *= suffix;
        suffix *= nums[i];
    }

    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d%s", ans[i], (i == n - 1) ? "" : ",");
    }
    printf("]\n");
    return 0;
}

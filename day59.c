// Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    if (k > n || k <= 0) return 0;

    int currentSum = 0;
    for (int i = 0; i < k; i++) currentSum += arr[i];
    int maxSum = currentSum;

    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k];
        if (currentSum > maxSum) maxSum = currentSum;
    }

    printf("%d\n", maxSum);
    return 0;
}

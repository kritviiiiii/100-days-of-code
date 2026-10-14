// Q112: Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.
#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxSoFar = arr[0], currMax = arr[0];
    for (int i = 1; i < n; i++) {
        currMax = (arr[i] > currMax + arr[i]) ? arr[i] : (currMax + arr[i]);
        if (currMax > maxSoFar) maxSoFar = currMax;
    }

    printf("%d\n", maxSoFar);
    return 0;
}

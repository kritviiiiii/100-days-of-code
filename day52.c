// Q102: Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.
#include <stdio.h>

int findCeil(int arr[], int n, int x) {
    int left = 0, right = n - 1, ans = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] >= x) {
            ans = mid;
            right = mid - 1; // look for earlier occurrence
        } else {
            left = mid + 1;
        }
    }
    return ans;
}

int main() {
    int n, x;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    printf("%d\n", findCeil(arr, n, x));
    return 0;
}

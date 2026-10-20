// Q118: Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    int actualSum = 0;
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actualSum += arr[i];
    }
    // Total numbers from 0 to n is n+1, sum is n*(n+1)/2
    int expectedSum = n * (n + 1) / 2;
    printf("Missing number: %d\n", expectedSum - actualSum);
    return 0;
}

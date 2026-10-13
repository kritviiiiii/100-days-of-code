// Q111: Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
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

    for (int i = 0; i <= n - k; i++) {
        int firstNeg = 0;
        for (int j = 0; j < k; j++) {
            if (arr[i + j] < 0) {
                firstNeg = arr[i + j];
                break;
            }
        }
        printf("%d%s", firstNeg, (i == n - k) ? "" : " ");
    }
    printf("\n");
    return 0;
}

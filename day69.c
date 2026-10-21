// Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.
#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int seen[1000] = {0};
    int repeated = -1;
    for (int i = 0; i < n; i++) {
        if (seen[arr[i]] == 1) {
            repeated = arr[i];
            break;
        }
        seen[arr[i]] = 1;
    }
    printf("Repeated element: %d\n", repeated);
    return 0;
}

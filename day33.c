// Q65: Search in a sorted array using binary search.
#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter target to search: ");
    scanf("%d", &target);
    int index = binarySearch(arr, n, target);
    if (index != -1)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");
    return 0;
}

// Q66: Insert an element in a sorted array at the appropriate position.
#include <stdio.h>

void insertInSortedArray(int arr[], int *size, int element) {
    int i;
    for (i = *size - 1; (i >= 0 && arr[i] > element); i--) {
        arr[i + 1] = arr[i];
    }
    arr[i + 1] = element;
    (*size)++;
}

int main() {
    int n, element;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int arr[100];
    printf("Enter sorted elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter element to insert: ");
    scanf("%d", &element);
    insertInSortedArray(arr, &n, element);
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

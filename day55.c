// Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.
#include <stdio.h>

int majorityElement(int nums[], int n) {
    int candidate = nums[0], count = 1;
    for (int i = 1; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }
    // Verify
    int freq = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) freq++;
    }
    if (freq > n / 2) return candidate;
    return -1;
}

int main() {
    int n;
    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1) return 0;
    int nums[100];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++) scanf("%d", &nums[i]);

    printf("%d\n", majorityElement(nums, n));
    return 0;
}

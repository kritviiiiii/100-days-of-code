// Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    printf("Enter string: ");
    if (scanf("%s", s) != 1) return 0;
    int n = strlen(s);
    int maxLen = 0;
    int lastPos[256];
    for (int i = 0; i < 256; i++) lastPos[i] = -1;

    int start = 0;
    for (int i = 0; i < n; i++) {
        unsigned char c = s[i];
        if (lastPos[c] >= start) {
            start = lastPos[c] + 1;
        }
        lastPos[c] = i;
        int currLen = i - start + 1;
        if (currLen > maxLen) maxLen = currLen;
    }

    printf("%d\n", maxLen);
    return 0;
}

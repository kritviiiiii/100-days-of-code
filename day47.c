// Q93: Check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    printf("Enter two strings:\n");
    if (scanf("%s %s", s1, s2) != 2) return 0;
    if (strlen(s1) != strlen(s2)) {
        printf("Not anagrams\n");
        return 0;
    }
    int count[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) count[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) count[(unsigned char)s2[i]]--;
    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }
    if (isAnagram)
        printf("Anagrams\n");
    else
        printf("Not anagrams\n");
    return 0;
}

// Q94: Find the longest word in a sentence.
#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    printf("Enter a sentence: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;
    char longest[100] = "";
    int maxLen = 0;
    char word[100];
    int idx = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            word[idx++] = str[i];
        } else {
            word[idx] = '\0';
            if (idx > maxLen) {
                maxLen = idx;
                strcpy(longest, word);
            }
            idx = 0;
        }
    }
    if (idx > maxLen) {
        word[idx] = '\0';
        strcpy(longest, word);
    }
    printf("Longest word: %s\n", longest);
    return 0;
}

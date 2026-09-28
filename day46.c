// Q91: Remove all vowels from a string.
#include <stdio.h>

int main() {
    char str[200], res[200];
    printf("Enter a string: ");
    if (scanf("%s", str) != 1) return 0;
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' &&
            c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U') {
            res[j++] = c;
        }
    }
    res[j] = '\0';
    printf("%s\n", res);
    return 0;
}

// Q92: Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    if (scanf("%s", str) != 1) return 0;
    int freq[26] = {0};
    char found = '\0';
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
            if (freq[str[i] - 'a'] == 2) {
                found = str[i];
                break;
            }
        }
    }
    if (found != '\0')
        printf("%c\n", found);
    else
        printf("-1\n");
    return 0;
}

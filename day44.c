// Q87: Count spaces, digits, and special characters in a string.
#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;
    int spaces = 0, digits = 0, special = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        if (str[i] == ' ') spaces++;
        else if (str[i] >= '0' && str[i] <= '9') digits++;
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) { /* letter */ }
        else special++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", spaces, digits, special);
    return 0;
}

// Q88: Replace spaces with hyphens in a string.
#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') str[i] = '-';
        else if (str[i] == '\n') str[i] = '\0';
    }
    printf("Modified string: %s\n", str);
    return 0;
}

// Q89: Count frequency of a given character in a string.
#include <stdio.h>

int main() {
    char str[200], ch;
    printf("Enter a string: ");
    if (scanf("%s", str) != 1) return 0;
    printf("Enter character to count: ");
    scanf(" %c", &ch);
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) count++;
    }
    printf("%d\n", count);
    return 0;
}

// Q90: Toggle case of each character in a string.
#include <stdio.h>

int main() {
    char str[200];
    printf("Enter a string: ");
    if (scanf("%s", str) != 1) return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') str[i] -= 32;
        else if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
    }
    printf("%s\n", str);
    return 0;
}

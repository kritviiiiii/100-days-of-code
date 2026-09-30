// Q95: Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[200];
    printf("Enter two strings:\n");
    if (scanf("%s %s", s1, s2) != 2) return 0;
    if (strlen(s1) != strlen(s2)) {
        printf("Not rotation\n");
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp, s2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");
    return 0;
}

// Q96: Reverse each word in a sentence without changing the word order.
#include <stdio.h>
#include <string.h>

void reverseSub(char *start, char *end) {
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[500];
    printf("Enter a sentence: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;
    int len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') str[len - 1] = '\0';

    char *wordStart = str;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            reverseSub(wordStart, &str[i - 1]);
            wordStart = &str[i + 1];
        }
    }
    reverseSub(wordStart, &str[strlen(str) - 1]);
    printf("%s\n", str);
    return 0;
}

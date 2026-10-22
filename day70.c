// Q120: Write a program to take a string input. Change it to sentence case.
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter text: ");
    if (!fgets(str, sizeof(str), stdin)) return 0;

    int isNewSentence = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isNewSentence && isalpha((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
            isNewSentence = 0;
        } else if (isalpha((unsigned char)str[i])) {
            str[i] = tolower((unsigned char)str[i]);
        }
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            isNewSentence = 1;
        }
    }
    printf("%s", str);
    return 0;
}

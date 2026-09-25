// Q85: Reverse a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    if (scanf("%s", str) != 1) return 0;
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}

// Q86: Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    if (scanf("%s", str) != 1) return 0;
    int len = strlen(str);
    int isPal = 1;
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            isPal = 0;
            break;
        }
    }
    if (isPal)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");
    return 0;
}

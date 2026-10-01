// Q97: Print the initials of a name.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    printf("Enter full name: ");
    if (!fgets(name, sizeof(name), stdin)) return 0;
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';

    for (int i = 0; name[i] != '\0'; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c.", name[i]);
        } else if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", name[i]);
        }
    }
    printf("\n");
    return 0;
}

// Q98: Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[200];
    printf("Enter full name: ");
    if (!fgets(name, sizeof(name), stdin)) return 0;
    int len = strlen(name);
    if (len > 0 && name[len - 1] == '\n') name[len - 1] = '\0';

    // find last space
    int lastSpace = -1;
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') lastSpace = i;
    }

    if (lastSpace == -1) {
        printf("%s\n", name);
        return 0;
    }

    for (int i = 0; i < lastSpace; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c.", name[i]);
        } else if (name[i - 1] == ' ' && name[i] != ' ') {
            printf("%c.", name[i]);
        }
    }
    printf(" %s\n", &name[lastSpace + 1]);
    return 0;
}

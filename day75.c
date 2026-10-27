// Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.
#include <stdio.h>

int main() {
    char filename[100], line[500];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;
    getchar(); // consume newline

    printf("Enter line to append: ");
    if (!fgets(line, sizeof(line), stdin)) return 0;

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Could not open file in append mode.\n");
        return 1;
    }

    fputs(line, fp);
    fclose(fp);
    printf("Text appended successfully.\n");
    return 0;
}

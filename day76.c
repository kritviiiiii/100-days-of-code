// Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    char buffer[256];
    printf("--- File Content ---\n");
    while (fgets(buffer, sizeof(buffer), fp) != NULL) {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}

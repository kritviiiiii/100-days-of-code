// Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error: Cannot open input.txt\n");
        return 1;
    }

    FILE *fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error: Cannot open output.txt\n");
        fclose(fin);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fin)) != EOF) {
        fputc(toupper((unsigned char)ch), fout);
    }

    fclose(fin);
    fclose(fout);
    printf("Text successfully converted to uppercase and saved to output.txt\n");
    return 0;
}

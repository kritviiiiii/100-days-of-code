// Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: ");
    if (scanf("%s", src) != 1) return 0;
    printf("Enter destination filename: ");
    scanf("%s", dest);

    FILE *fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        printf("Cannot open source file %s\n", src);
        return 1;
    }

    FILE *fdest = fopen(dest, "w");
    if (fdest == NULL) {
        printf("Cannot open destination file %s\n", dest);
        fclose(fsrc);
        return 1;
    }

    char ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdest);
    }

    fclose(fsrc);
    fclose(fdest);
    printf("File copied successfully from %s to %s\n", src, dest);
    return 0;
}

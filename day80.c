// Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1) return 0;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file!\n");
        return 1;
    }

    char name[50];
    int roll;
    float marks;

    for (int i = 0; i < n; i++) {
        printf("Enter name, roll number, marks for student %d: ", i + 1);
        scanf("%s %d %f", name, &roll, &marks);
        fprintf(fp, "%s %d %.2f\n", name, roll, marks);
    }
    fclose(fp);

    printf("\n--- Reading Records from File ---\n");
    fp = fopen("students.txt", "r");
    if (fp == NULL) return 1;

    while (fscanf(fp, "%s %d %f", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll No: %d | Marks: %.2f\n", name, roll, marks);
    }
    fclose(fp);
    return 0;
}

// Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s;
    printf("Enter student name: ");
    if (scanf("%s", s.name) != 1) return 0;
    printf("Enter roll number: ");
    scanf("%d", &s.roll_no);
    printf("Enter marks: ");
    scanf("%f", &s.marks);

    printf("\n--- Student Details ---\n");
    printf("Name: %s\nRoll Number: %d\nMarks: %.2f\n", s.name, s.roll_no, s.marks);
    return 0;
}

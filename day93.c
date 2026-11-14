// Q143: Find and print the student with the highest marks.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;
    struct Student students[100];

    int topIdx = 0;
    for (int i = 0; i < n; i++) {
        printf("Student %d (Name RollNo Marks): ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
        if (students[i].marks > students[topIdx].marks) {
            topIdx = i;
        }
    }

    printf("\nTop Student:\nName: %s | Roll: %d | Marks: %.2f\n",
           students[topIdx].name, students[topIdx].roll_no, students[topIdx].marks);
    return 0;
}

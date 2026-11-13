// Q142: Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student students[5];
    printf("Enter details of 5 students (Name RollNo Marks):\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    printf("\n=== All Students ===\n");
    for (int i = 0; i < 5; i++) {
        printf("%d. Name: %s | Roll: %d | Marks: %.2f\n",
               i + 1, students[i].name, students[i].roll_no, students[i].marks);
    }
    return 0;
}

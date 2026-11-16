// Q145: Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

struct Student getTopStudent(struct Student arr[], int n) {
    int top = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i].marks > arr[top].marks) top = i;
    }
    return arr[top];
}

int main() {
    struct Student batch[] = {
        { "Alice", 1, 88.0 },
        { "Bob", 2, 95.5 },
        { "Carol", 3, 91.0 }
    };
    struct Student topper = getTopStudent(batch, 3);
    printf("Topper: %s with %.2f marks\n", topper.name, topper.marks);
    return 0;
}

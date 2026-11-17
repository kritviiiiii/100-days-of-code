// Q146: Create Employee structure with nested Date structure for joining date and print details.
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[50];
    float salary;
    struct Date joiningDate;
};

int main() {
    struct Employee emp = { 101, "David", 65000.0, { 15, 8, 2026 } };
    printf("Employee ID: %d\nName: %s\nSalary: $%.2f\nJoining Date: %02d/%02d/%04d\n",
           emp.id, emp.name, emp.salary,
           emp.joiningDate.day, emp.joiningDate.month, emp.joiningDate.year);
    return 0;
}

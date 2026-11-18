// Q147: Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee e1 = { 202, "Sarah", 75000.0f };

    // Write binary
    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) return 1;
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);

    // Read binary
    struct Employee e2;
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) return 1;
    fread(&e2, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Read from binary file:\nID: %d | Name: %s | Salary: %.2f\n",
           e2.id, e2.name, e2.salary);
    return 0;
}

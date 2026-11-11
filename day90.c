// Q140: Define a struct with enum Gender and print person's gender.
#include <stdio.h>

enum Gender { MALE, FEMALE, OTHER };

struct Person {
    char name[50];
    int age;
    enum Gender gender;
};

int main() {
    struct Person p = { "Alex", 20, FEMALE };
    const char *genderNames[] = { "Male", "Female", "Other" };

    printf("Name: %s\nAge: %d\nGender: %s\n", p.name, p.age, genderNames[p.gender]);
    return 0;
}

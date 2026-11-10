// Q139: Show that enums store integers by printing assigned values.
#include <stdio.h>

enum Priority { LOW = 1, MEDIUM = 5, HIGH = 10 };

int main() {
    enum Priority p1 = LOW;
    enum Priority p2 = MEDIUM;
    enum Priority p3 = HIGH;

    printf("Priority LOW stores integer: %d\n", p1);
    printf("Priority MEDIUM stores integer: %d\n", p2);
    printf("Priority HIGH stores integer: %d\n", p3);
    printf("Size of enum Priority: %zu bytes\n", sizeof(p1));
    return 0;
}

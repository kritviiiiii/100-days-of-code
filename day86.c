// Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.
#include <stdio.h>

enum MenuChoice { ADD = 1, SUBTRACT, MULTIPLY };

int main() {
    int choice;
    double a, b;
    printf("1. Add\n2. Subtract\n3. Multiply\nEnter choice: ");
    if (scanf("%d", &choice) != 1) return 0;
    printf("Enter two numbers: ");
    scanf("%lf %lf", &a, &b);

    switch ((enum MenuChoice)choice) {
        case ADD:
            printf("Result: %.2f\n", a + b);
            break;
        case SUBTRACT:
            printf("Result: %.2f\n", a - b);
            break;
        case MULTIPLY:
            printf("Result: %.2f\n", a * b);
            break;
        default:
            printf("Invalid choice!\n");
    }
    return 0;
}

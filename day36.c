// Q71: Read and print a matrix.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int matrix[20][20];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}

// Q72: Find the sum of all elements in a matrix.
#include <stdio.h>

int main() {
    int r, c, sum = 0;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int val;
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &val);
            sum += val;
        }
    }
    printf("Sum: %d\n", sum);
    return 0;
}

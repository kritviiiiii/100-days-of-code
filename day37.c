// Q73: Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int a[20][20], rowSum[20];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
            rowSum[i] += a[i][j];
        }
    }

    printf("Row sums: ");
    for (int i = 0; i < r; i++) {
        printf("%d ", rowSum[i]);
    }
    printf("\n");
    return 0;
}

// Q74: Find the transpose of a matrix.
#include <stdio.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2) return 0;
    int a[20][20];
    printf("Enter elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    printf("Transpose:\n");
    for (int j = 0; j < c; j++) {
        for (int i = 0; i < r; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

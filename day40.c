// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>

int main() {
    int r, c, i, j, d;
    int a[10][10];

    scanf("%d %d", &r, &c);

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for(d = 0; d < r + c - 1; d++) {
        for(i = 0; i < r; i++) {
            j = d - i;
            if(j >= 0 && j < c)
                printf("%d ", a[i][j]);
        }
    }

    return 0;
}

// Q80: Multiply two matrices.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], result[10][10];

    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);

    if(c1 != r2) {
        printf("Multiplication not possible");
        return 0;
    }

    for(i = 0; i < r1; i++)
        for(j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < r2; i++)
        for(j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            result[i][j] = 0;
            for(k = 0; k < c1; k++)
                result[i][j] += a[i][k] * b[k][j];
        }
    }

    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}

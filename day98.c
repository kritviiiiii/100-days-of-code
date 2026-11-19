// Q148: Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

struct Point {
    int x;
    int y;
};

int areIdentical(struct Point p1, struct Point p2) {
    return (p1.x == p2.x && p1.y == p2.y);
}

int main() {
    struct Point p1, p2;
    printf("Enter Point 1 (x y): ");
    if (scanf("%d %d", &p1.x, &p1.y) != 2) return 0;
    printf("Enter Point 2 (x y): ");
    scanf("%d %d", &p2.x, &p2.y);

    if (areIdentical(p1, p2))
        printf("Identical\n");
    else
        printf("Not Identical\n");
    return 0;
}

// Q138: Print all enum names and integer values using a loop.
#include <stdio.h>

enum Color { RED, GREEN, BLUE, YELLOW, TOTAL_COLORS };

int main() {
    const char *colorNames[] = { "RED", "GREEN", "BLUE", "YELLOW" };
    for (int i = 0; i < TOTAL_COLORS; i++) {
        printf("Color: %s | Value: %d\n", colorNames[i], i);
    }
    return 0;
}

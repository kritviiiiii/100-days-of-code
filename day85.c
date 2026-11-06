// Q135: Assign explicit values starting from 10 and print them.
#include <stdio.h>

enum Codes {
    START = 10,
    PAUSE = 20,
    RESUME = 30,
    STOP = 40
};

int main() {
    printf("START: %d\n", START);
    printf("PAUSE: %d\n", PAUSE);
    printf("RESUME: %d\n", RESUME);
    printf("STOP: %d\n", STOP);
    return 0;
}

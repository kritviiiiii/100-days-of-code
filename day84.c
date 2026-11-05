// Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status { SUCCESS, FAILURE, TIMEOUT };

void printStatusMessage(enum Status s) {
    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation encountered an error and failed.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out before completion.\n");
            break;
    }
}

int main() {
    printStatusMessage(SUCCESS);
    printStatusMessage(FAILURE);
    printStatusMessage(TIMEOUT);
    return 0;
}

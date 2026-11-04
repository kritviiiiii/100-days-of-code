// Q133: Create an enum for months and print how many days each month has.
#include <stdio.h>

enum Month {
    JANUARY = 1, FEBRUARY, MARCH, APRIL, MAY, JUNE,
    JULY, AUGUST, SEPTEMBER, OCTOBER, NOVEMBER, DECEMBER
};

int getDaysInMonth(enum Month m) {
    switch (m) {
        case FEBRUARY: return 28; // Standard year
        case APRIL: case JUNE: case SEPTEMBER: case NOVEMBER: return 30;
        default: return 31;
    }
}

int main() {
    const char *monthNames[] = {
        "", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    for (int m = JANUARY; m <= DECEMBER; m++) {
        printf("%s has %d days\n", monthNames[m], getDaysInMonth((enum Month)m));
    }
    return 0;
}

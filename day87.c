// Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.
#include <stdio.h>

enum UserRole { ADMIN, USER, GUEST };

void displayRoleMessage(enum UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Admin: Full system access granted.\n");
            break;
        case USER:
            printf("Welcome User: Standard permissions available.\n");
            break;
        case GUEST:
            printf("Welcome Guest: Read-only access enabled.\n");
            break;
    }
}

int main() {
    displayRoleMessage(ADMIN);
    displayRoleMessage(USER);
    displayRoleMessage(GUEST);
    return 0;
}

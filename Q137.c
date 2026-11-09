#include <stdio.h>
#include <string.h>

typedef enum {
    ADMIN,
    USER,
    GUEST,
    INVALID_ROLE
} UserRole;

UserRole stringToRole(const char *str) {
    if (strcmp(str, "ADMIN") == 0) return ADMIN;
    if (strcmp(str, "USER") == 0)  return USER;
    if (strcmp(str, "GUEST") == 0) return GUEST;
    return INVALID_ROLE;
}

void displayWelcomeMessage(UserRole role) {
    switch (role) {
        case ADMIN:
            printf("Welcome Admin! Privileged access granted.\n");
            break;
        case USER:
            printf("Welcome User! Access granted to dashboard.\n");
            break;
        case GUEST:
            printf("Welcome Guest!\n");
            break;
        default:
            printf("Access Denied: Invalid Role.\n");
            break;
    }
}

int main() {
    char inputRole[50];

    if (scanf("%49s", inputRole) == 1) {
        UserRole currentRole = stringToRole(inputRole);
        displayWelcomeMessage(currentRole);
    }

    return 0;
}

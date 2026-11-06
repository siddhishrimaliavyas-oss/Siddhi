#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} Status;

void printStatusMessage(Status status) {
    switch (status) {
        case SUCCESS:
            printf("Operation successful\n");
            break;
        case FAILURE:
            printf("Operation failed\n");
            break;
        case TIMEOUT:
            printf("Operation timed out\n");
            break;
        default:
            printf("Unknown status\n");
            break;
    }
}

int main() {
    int input;

    if (scanf("%d", &input) == 1) {
        printStatusMessage((Status)input);
    }

    return 0;
}

#include <stdio.h>

typedef enum {
    SUCCESS,
    FAILURE,
    TIMEOUT
} StatusCode;

int main() {
    StatusCode successVal = SUCCESS;
    StatusCode failureVal = FAILURE;
    StatusCode timeoutVal = TIMEOUT;

    printf("SUCCESS=%d, FAILURE=%d, TIMEOUT=%d\n", successVal, failureVal, timeoutVal);

    return 0;
}

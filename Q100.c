#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    if (scanf("%999s", str)!= 1) {
        return 0;
    }
    int len = strlen(str);
    int first = 1;
    for (int i = 0; i<len; i++) {
        for (int j = i; j<len; j++) {
            if (!first) {
                printf(",");
            }
            first = 0;
            for (int k = i; k<= j; k++) {
                printf("%c", str[k]);
            }
        }
    }
    printf("\n");

    return 0;

}

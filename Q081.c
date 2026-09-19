#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    if (scanf("%99s" , str) != 1) {
        return 0;
    }
    
    while(str[count] != '\0') {
        count++;
    }
    printf("%d\n" , count);

    return 0;

}

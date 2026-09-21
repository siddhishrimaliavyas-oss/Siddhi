#include <stdio.h>
#include <string.h>

int main() {
    char str[100];

    if (scanf("%99s" , str) != 1) {
        return 1;
    }

    int length = strlen(str);

    int start = 0;
    int end = length-1;
    while (start<end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        start++;
        end--;
    }

    printf("%s\n" , str);

    return 0;

}

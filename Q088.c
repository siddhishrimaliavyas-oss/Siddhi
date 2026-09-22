#include <stdio.h>
#include <string.h>

void replaceSpaces(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    char str[100];

    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    replaceSpaces(str);
    printf("%s\n", str);

    return 0;

}

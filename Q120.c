#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) return 1;

    int new_word = 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isspace(str[i])) {
            new_word = 1;
        } else {
            if (new_word) {
                str[i] = toupper(str[i]);
                new_word = 0;
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }

    printf("%s", str);

    return 0;
}

#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];

    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 1;

    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    int characters = 0;
    int words = 0;
    int lines = 0;
    int in_word = 0;
    int ch;

    while ((ch = fgetc(fptr)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            in_word = 0;
        } else {
            if (!in_word) {
                words++;
                in_word = 1;
            }
        }
    }

    if (characters > 0 && lines == 0) {
        lines = 1;
    }

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    fclose(fptr);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char filename[100];
    char ch;
    int vowels = 0, consonants = 0;
    FILE *file;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha((unsigned char)ch)) {
            char lower_ch = tolower((unsigned char)ch);
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}

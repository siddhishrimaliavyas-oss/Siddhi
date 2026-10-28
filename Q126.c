#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    char ch;
    FILE *file;

    printf("Enter filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    printf("\n");

    fclose(file);
    return 0;
}

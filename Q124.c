#include <stdio.h>

int main() {
    char source_name[100];
    char dest_name[100];

    printf("Enter source filename: ");
    if (scanf("%s", source_name) != 1) return 1;

    printf("Enter destination filename: ");
    if (scanf("%s", dest_name) != 1) return 1;

    FILE *src = fopen(source_name, "r");
    if (src == NULL) {
        printf("Error: Could not open source file %s\n", source_name);
        return 1;
    }

    FILE *dest = fopen(dest_name, "w");
    if (dest == NULL) {
        fclose(src);
        printf("Error: Could not create destination file %s\n", dest_name);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    printf("File copied successfully to %s\n", dest_name);

    fclose(src);
    fclose(dest);

    return 0;
}

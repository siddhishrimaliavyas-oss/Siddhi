#include <stdio.h>
#include <string.h>

int main() {
    char filename;

    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 1;

    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL) {
        return 1;
    }

    char buffer;
    while (fgets(buffer, sizeof(buffer), fptr) != NULL) {
        printf("%s", buffer);
    }

    fclose(fptr);
    return 0;
}

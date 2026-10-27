#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256];

    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fgets(buffer, sizeof(buffer), stdin);

    fprintf(file, "\n%s", buffer);

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}

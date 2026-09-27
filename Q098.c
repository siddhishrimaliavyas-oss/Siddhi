#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    fgets(name, sizeof(name), stdin);
    char *current = strtok(name, " \n");
    char *next = strtok(NULL, " \n");
    while(next != NULL) {
        printf("%c.", current[0]);
        current = next;
        next = strtok(NULL, " \n");
    }
    printf("%s\n", current);

    return 0;

}

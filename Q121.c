#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("Name: ");
    if (scanf("%s", name) != 1) return 1;

    printf("Age: ");
    if (scanf("%d", &age) != 1) return 1;

    FILE *fptr = fopen("info.txt", "w");
    if (fptr == NULL) {
        return 1;
    }

    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);
    fclose(fptr);

    printf("File created successfully! Data written to info.txt\n");

    return 0;
}

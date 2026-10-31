#include <stdio.h>
#include <stdlib.h>

int main() {
    char filename[100];
    FILE *file;
    int num;
    int sum = 0;
    int count = 0;
    double average;

    printf("Enter the filename: ");
    scanf("%99s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count > 0) {
        average = (double)sum / count;
        printf("Sum = %d\n", sum);
        printf("Average = %.2f\n", average);
    } else {
        printf("The file is empty or contains no integers.\n");
    }

    return 0;
}

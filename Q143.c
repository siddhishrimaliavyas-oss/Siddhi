#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n, i, topperIndex = 0;

    printf("Enter the number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    struct Student students[n];

    for (i = 0; i < n; i++) {
        printf("Enter name, roll number, and marks for student %d: ", i + 1);
        scanf("%s %d %d", students[i].name, &students[i].roll_no, &students[i].marks);
    }

    // Find the index of the student with the highest marks
    for (i = 1; i < n; i++) {
        if (students[i].marks > students[topperIndex].marks) {
            topperIndex = i;
        }
    }

    printf("\nTopper: %s (Marks: %d)\n", students[topperIndex].name, students[topperIndex].marks);

    return 0;
}

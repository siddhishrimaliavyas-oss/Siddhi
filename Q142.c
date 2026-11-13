#include <stdio.h>

// Define the structure for a student
struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[5];
    int i;

    // Input details for 5 students
    for (i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %49[^\n]", students[i].name); // Reads full name including spaces
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Print all student details in a tabular format
    printf("--------------------------------------------------\n");
    printf("%-25s %-12s %-10s\n", "Name", "Roll No", "Marks");
    printf("--------------------------------------------------\n");

    for (i = 0; i < 5; i++) {
        printf("%-25s %-12d %-10.2f\n", students[i].name, students[i].roll, students[i].marks);
    }
    printf("--------------------------------------------------\n");

    return 0;
}

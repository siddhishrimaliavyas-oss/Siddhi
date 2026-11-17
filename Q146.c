#include <stdio.h>

// Define nested structure for Joining Date
struct Data {
    int day;
    int month;
    int year;
};

// Define main Employee structure
struct Employee {
    char name[50];
    int id;
    struct Data joiningDate; // Nested structure member
};

int main() {
    struct Employee e;

    // Input employee details
    printf("Employee: ");
    scanf("%s", e.name);

    printf("ID: ");
    scanf("%d", &e.id);

    printf("Joining Date: ");
    scanf("%d %d %d", &e.joiningDate.day, &e.joiningDate.month, &e.joiningDate.year);

    // Print formatted employee details
    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%d\n",
           e.name, e.id,
           e.joiningDate.day, e.joiningDate.month, e.joiningDate.year);

    return 0;
}



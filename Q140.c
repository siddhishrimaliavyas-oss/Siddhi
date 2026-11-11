#include <stdio.h>


typedef enum {
    MALE,
    FEMALE,
    OTHER,
    UNKNOWN
} Gender;


typedef struct {
    Gender gender;
} Person;


void printGender(Person p) {
    switch (p.gender) {
        case MALE:
            printf("Output: Male\n");
            break;
        case FEMALE:
            printf("Output: Female\n");
            break;
        case OTHER:
            printf("Output: Other\n");
            break;
        default:
            printf("Output: Unknown\n");
    }
}

int main() {
    Person p1;
    int choice;

    
    printf("Enter Gender (0 for MALE, 1 for FEMALE, 2 for OTHER): ");
    if (scanf("%d", &choice) != 1) {
        printf("Invalid numeric input.\n");
        return 1;
    }
 
    switch (choice) {
        case 0:
            p1.gender = MALE;
            break;
        case 1:
            p1.gender = FEMALE;
            break;
        case 2:
            p1.gender = OTHER;
            break;
        default:
            p1.gender = UNKNOWN;
            break;
    }

   
    printGender(p1);

    return 0;
}

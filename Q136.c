#include <stdio.h>
#include <string.h>

// Define the enum for menu choices
typedef enum {
    ADD,
    SUBTRACT,
    MULTIPLY,
    INVALID
} MenuChoice;

// Helper function to convert string input to the corresponding enum
MenuChoice get_choice(const char *op_str) {
    if (strcmp(op_str, "ADD") == 0) return ADD;
    if (strcmp(op_str, "SUBTRACT") == 0) return SUBTRACT;
    if (strcmp(op_str, "MULTIPLY") == 0) return MULTIPLY;
    return INVALID;
}

int main() {
    char op_str[20];
    double num1, num2, result;

    // Read the operation string and the two numbers
    if (scanf("%19s %lf %lf", op_str, &num1, &num2) != 3) {
        printf("Invalid Input Format\n");
        return 1;
    }

    // Convert the string to the enum type
    MenuChoice choice = get_choice(op_str);

    // Perform operations using switch
    switch (choice) {
        case ADD:
            result = num1 + num2;
            printf("%.0f\n", result);
            break;
            
        case SUBTRACT:
            result = num1 - num2;
            printf("%.0f\n", result);
            break;
            
        case MULTIPLY:
            result = num1 * num2;
            printf("%.0f\n", result);
            break;
            
        case INVALID:
        default:
            printf("Invalid Operation\n");
            break;
    }

    return 0;
}

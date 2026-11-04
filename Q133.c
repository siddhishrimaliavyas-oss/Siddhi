#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Define an enum for the months
typedef enum {
    JAN, FEB, MAR, APR, MAY, JUN, 
    JUL, AUG, SEP, OCT, NOV, DEC, 
    INVALID
} Month;

// Function to convert input string to the corresponding Month enum
Month get_month_from_string(const char *str) {
    char upper_str[4];
    
    // Convert input to uppercase and take the first 3 characters
    for (int i = 0; i < 3; i++) {
        if (str[i] == '\0') break;
        upper_str[i] = toupper((unsigned char)str[i]);
    }
    upper_str[3] = '\0';

    if (strcmp(upper_str, "JAN") == 0) return JAN;
    if (strcmp(upper_str, "FEB") == 0) return FEB;
    if (strcmp(upper_str, "MAR") == 0) return MAR;
    if (strcmp(upper_str, "APR") == 0) return APR;
    if (strcmp(upper_str, "MAY") == 0) return MAY;
    if (strcmp(upper_str, "JUN") == 0) return JUN;
    if (strcmp(upper_str, "JUL") == 0) return JUL;
    if (strcmp(upper_str, "AUG") == 0) return AUG;
    if (strcmp(upper_str, "SEP") == 0) return SEP;
    if (strcmp(upper_str, "OCT") == 0) return OCT;
    if (strcmp(upper_str, "NOV") == 0) return NOV;
    if (strcmp(upper_str, "DEC") == 0) return DEC;
    
    return INVALID;
}

// Function to print the number of days based on the Month enum
void print_days(Month month) {
    switch (month) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case DEC:
            printf("31 days\n");
            break;
        case APR: case JUN: case SEP: case NOV:
            printf("30 days\n");
            break;
        case FEB:
            printf("28 or 29 days\n");
            break;
        default:
            printf("Invalid month entered.\n");
            break;
    }
}

int main() {
    char input[20];
    
    printf("Enter month (e.g., JAN, FEB, MAR): ");
    if (scanf("%19s", input) == 1) {
        Month selected_month = get_month_from_string(input);
        print_days(selected_month);
    }
    
    return 0;
}

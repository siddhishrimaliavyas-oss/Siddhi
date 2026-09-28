#include <stdio.h>

int main() {
    int day, month, year;
    const char *months[] = {
        "", "jan", "feb", "mar", "apr", "may", "jun", "jul", "aug", "sep", "oct", "nov", "dec"
    };
    if (scanf("%d/%d/%d", &day, &month, &year)== 3) {
        
            if (month >= 1 && month <= 12) {
                printf("%02d-%s-%04d\n", day, months[month], year);
            }
        
    }

    return 0;

}

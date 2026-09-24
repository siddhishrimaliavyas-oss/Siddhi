#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char result[100];
    int j = 0;
    scanf("%s" , str);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if ( ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' && ch != 'A' && ch != 'E' && ch != 'O' && ch != 'I' && ch != 'U') {
            result[j] = str[i];
            j++;
        }
    }
    result[j] = '\0';
    printf("%s\n", result);

    return 0;

}

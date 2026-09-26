#include <stdio.h>
#include <string.h>

void reverseWord(char *start, char *end) {
    char temp;
    while (start<end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[1000];
    if (fgets(str, sizeof(str), stdin )== NULL) {
        return 0;
    }
    str[strcspn(str, "\n")] = '\0';
    char *word_start = str;
    char *temp = str;
    while (*temp != '\0') {
        if (*temp == ' ') {
            reverseWord(word_start, temp-1);
            word_start = temp+1;
        }
        temp++;
    }
    reverseWord(word_start, temp-1);
    printf("%s\n", str);

    return 0;

}

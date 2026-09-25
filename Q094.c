#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char sentence[1000];
    char longest[1000] = "";
    char current[1000] = "";
    int i = 0, j = 0;

    printf ("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    sentence[strcspn(sentence, "\n")] = '\0';

    while (sentence[i] != '\0') {
        if (!isspace(sentence[i])) {
            current[j++] = sentence[i];
        } else {
            current[j] = '\0';
            if (strlen(current) > strlen(longest)) {
                strcpy(longest, current);
            }
            j = 0;
        }
        i++;
    }

    current[j] = '\0';
    if (strlen(current) > strlen(longest)) {
        strcpy(longest, current);
    }

    printf("%s \n", longest);

    return 0;

}

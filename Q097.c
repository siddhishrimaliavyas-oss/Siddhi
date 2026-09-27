#include <stdio.h>
#include <ctype.h>
#include <ctype.h>

int main() {
    char name[100];
    if (fgets(name, sizeof(name), stdin)!= NULL) {
        int i = 0;
        if (name[0] != '\0' && name[0] != '\n' && name[0] != ' ') {
            printf ("%c.", toupper(name[0]));
        }
        while (name[i] != '\0') {
            if (name[i] == ' ' && name[i+1] != '\0' && name[i+1] != '\n' && name[i+1] != ' ') {
                printf("%c.", toupper(name[i+1]));
            }
            i++;
        }
        printf("\n");
    }

    return 0;

}

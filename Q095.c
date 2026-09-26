#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    if (len1 != len2) {
        return 0;
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    int result = (strstr(temp, s2) != NULL);
    free(temp);
    return result;
}
int main() {
    char s1[100], s2[100];
    if (scanf("%99s" , s1) != 1|| scanf("%99s" , s2) != 1) {
        return 1;
    }
    if (isRotation(s1, s2)) {
        printf("Rotation\n");
    } else {
        printf ("Not rotation\n");
    }

    return 0;

}

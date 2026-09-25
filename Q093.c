#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_LIMIT 1005

bool checkAnagram(char str1[], char str2[]) {
    int count[256] =  {0};
    if (strlen(str1) != strlen(str2)) {
        return false;
    }

    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i<256; i++) {
        if (count[i] != 0) {
            return false;
        }
    }

    return true;
}
int main() {
    char str1[MAX_LIMIT];
    char str2[MAX_LIMIT];

    if (scanf("%s %s", str1, str2) == 2) {
        if (checkAnagram(str1, str2)) {
            printf ("Anagrams \n");
        } else {
            printf ("Not anagrams \n");
        }
    }

    return 0;

}

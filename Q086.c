#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isPalindrome(char str[]) {
    int left = 0;
    int right = strlen(str) - 1;
    if (str[right] == '\n') {
        str[right] = '\0';
        right--;
    }
    while (left<right) {
        if (str[left] != str[right]) {
            return false;
        }
        left++;
        right--;

    }
    return true;
}

int main() {
    char str[100];
    if (fgets(str, sizeof(str), stdin) != NULL) {
        if (isPalindrome(str)){
            printf("Palindrome \n");
        } else {
            printf ("Not palindrome \n");
        }
    }

    return 0;

}

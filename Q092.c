#include <stdio.h>
#include <string.h>
#include <stdbool.h>

 int main() {
    char str[100];
    bool visited[26] = {false};
    bool found = false;
    if (scanf("%s", str)!= 1){
        return 0;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z'){
            int index = str[i]-'a';
            if (visited[index]) {
                printf("%c\n", str[i]);
                found = true;
                break;
            }
            visited[index] = true;
        }
    }
    if (!found) {
        printf("No repeating character found\n");
    }


    return 0;

}

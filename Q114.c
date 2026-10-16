#include <stdio.h>
#include <string.h>

int main() {
    char s[100000];
    if (scanf("%s", s) != 1) {
        return 1;
    }

    int last_idx[256];
    for (int i = 0; i < 256; i++) {
        last_idx[i] = -1;
    }

    int max_len = 0;
    int start = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        if (last_idx[(unsigned char)s[i]] >= start) {
            start = last_idx[(unsigned char)s[i]] + 1;
        }
        last_idx[(unsigned char)s[i]] = i;
        int current_len = i - start + 1;
        if (current_len > max_len) {
            max_len = current_len;
        }
    }

    printf("%d\n", max_len);

    return 0;
}

#include <stdio.h>

int main() {
    char x;
    printf ("Enter the cahracter:");
    scanf ("%c" , & x);
    if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u'){
        printf ("Vowel");
    }else{
        printf ("Consonant");
    }

    return 0;

}

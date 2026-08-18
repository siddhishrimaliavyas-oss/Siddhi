#include <stdio.h>

int main() {
    int p;
    printf ("Enter the percentage:");
    scanf ("%d" , & p);
    if (p <= 100 && p >= 90){
        printf ("Grade A");
    }else if (p <= 89 && p >= 80){
        printf ("Grade B");
    }else if (p <=79 && p >= 70) {
        printf ("Grade C");
    }else if (p <= 69 && p >= 60) {
        printf ("Grade D");
    }else {
    printf ("Grade F");
    }
    return 0;

}

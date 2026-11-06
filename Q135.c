#include <stdio.h>


enum Alphabet {
    A = 10,  // Explicitly assigned 10
    B,       // Auto-increments to 11
    C        // Auto-increments to 12
};

int main() {
    
    printf("A=%d B=%d C=%d\n", A, B, C);
    
    return 0;
}

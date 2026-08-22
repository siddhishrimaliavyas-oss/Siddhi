#include <stdio.h>

int main() {
    char op;
    int a , b , r;
    printf ("Enter an operator (+ , - , * , / , %%):");
    scanf ("%c" , & op);
    printf ("Enter first number:");
    scanf ("%d" , & a);
    printf ("Enter second number:");
    scanf ("%d" , & b);
    switch (op) {
        case '+' :
            r = a + b;
            printf ("Result : %d \n" , r);
            break;
        case '-':
            r = a - b;
            printf ("Result : %d \n" , r);
            break;
        case '*':
            r = a * b;
            printf ("Result : %d  \n" , r);
            break;
        case '/':
            if (b != 0){
                r = a/b;
                printf ( "Result : %d \n" , r);
            } else {
                printf ("Error : Division by zero is not allowed . \n");
            }
            break;
        case '%':
            if (b != 0){
                r a%b;
                printf ("Result : %d \n" , r);
            } else {
                printf (" Error : Division by zero is not allowed.\n");
            }
            break;
        default :
            printf ("Error : INVALID OPERATOR SELECTED");
            break;
    }

    return 0;

}

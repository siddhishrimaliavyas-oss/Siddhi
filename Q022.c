#include <stdio.h>

int main() {
    int cp , sp , p , l , pp ,lp ;
    printf ("Enter cost price:");
    scanf ("%d", & cp);
    printf ("Enter selling price:");
    scanf ("%d" , & sp);
    if (sp > cp){
    p = sp - cp;
    pp = (p*100)/cp;
    printf ("PROFIT%% IS %d" , pp);
    } else if (cp > sp) {
    l = cp - sp;
    lp = (l*100)/cp;
    printf ("LOSS%% IS %d" , lp);
    } else {
        printf ("NO PROFIT NO LOSS");
    }
    return 0;

}

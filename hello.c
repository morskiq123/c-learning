#include <stdio.h>
#define IN 1
#define OUT 0

main() {

    int c, nw, nc, nl, state;

    state = OUT;
    nw = nc = nl = 0;

    while ((c == getchar()) != EOF){
        if (c == '\n')
            ++nl;
        if (c == ' ' || c == '\t' || c == '\n'){
            state = OUT;
        }
        else if (state == OUT){
            state = IN;
            ++nw;
        }
    }
    
    printf("%d %d %d\n", nl, nw, nc); 
}

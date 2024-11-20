#include <stdio.h>

int main() {
    int n[] = {33,8,7,11,54,77,13,16};
    int p;

    for(p = 0; p <= 7; p++) {
        if(n[p] % 2 == 0) {
            printf("O valor %d é PAR \n", n[p]);
     }
    }

    return 0;
}
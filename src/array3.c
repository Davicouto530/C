#include <stdio.h>

int main() {
    int a1[] = {10,2,6,8,45,78};
    int a2[] = {6,78,0,2,15,7,102,16,17};

    int p, s;
    for(p = 0; p <= 5; p++) {
        for(s = 0; s <= 8 ; s++) {
            if(a1[p] == a2[s]) {
                printf("%d \n", a1[p]);
                break;
            }
        }
    }

return 0;
}
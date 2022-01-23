/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Even or Odd;
*/
#include <stdio.h>

int main () {
    
    int i, n, x;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        scanf("%d", &x);
        if (x % 2 != 0 && x < 0) {
            printf("ODD NEGATIVE\n");
        } else if (x % 2 != 0 && x > 0) {
            printf("ODD POSITIVE\n");
        } else if (x < 0) {
            printf("EVEN NEGATIVE\n");
        } else if (x > 0) {
            printf("EVEN POSITIVE\n");
        } else {
            printf("NULL\n");
        }        
    }

    return 0;
}
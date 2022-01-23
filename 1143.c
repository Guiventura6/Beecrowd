/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Squared and Cubic;
*/
#include <stdio.h>

int main () {
    
    int i, n, x;

    scanf("%d", &n);

    x = 1;
    for (i = 0; i < n; i++) {
        printf("%d %d %d\n", x, x*x, x*x*x);
        x++;
    }

    return 0;
}
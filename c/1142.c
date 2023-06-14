/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: PUM;
*/
#include <stdio.h>

int main () {
    
    int i, n, x;

    scanf("%d", &n);

    x = 1;
    for (i = 0; i < n; i++) {
        printf("%d %d %d PUM\n", x, x + 1,  x + 2);
        x +=4;
    }
        
    return 0;
}
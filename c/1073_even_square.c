/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Even Square;
*/
#include <stdio.h>

int main() {
    
    int i, n, square;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            square = i*i;
            printf("%d^%d = %d\n", i, 2, square);
        }        
    }
            
    return 0;
}
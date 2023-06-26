/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Sum of Consecutive Odd Numbers II;
*/
#include <stdio.h>

int main () {
    
    int i, j, n, x, y, sum = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        
        int aux;
        if (x > y) {
            aux = x;
            x = y;
            y = aux;
        }

        for (j = x + 1; j < y; j++) {
            if (j % 2 != 0 ) {
                sum += j;
            }            
        }
        printf("%d\n", sum);
        sum = 0;                
    }
            
    return 0;
}
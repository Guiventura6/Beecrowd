/*
    @autor: Guiventura6;
    @data: 30/01/2022;
    @Problema: Sum of Consecutive Odd Numbers III;
*/
#include <stdio.h>

main() {

    int i, j, n, x, y, sum = 0, cont = 0;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        
        scanf("%d%d", &x, &y);
        
        for (j = x; cont < y; j++)
        {
            if (j % 2 != 0) {
                sum += j;
                cont++;                               
            }
        }
        printf("%d\n", sum);
        sum = 0;    
        cont = 0;    
    }

    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Sequence of Numbers and Sum;
*/
#include <stdio.h>

int main () {
    
    int i, m, n, aux;
    
    scanf("%d%d", &m, &n);

    do {
        if (m > n) {
            aux = m;
            m = n;
            n = aux;
        }

        int sum = 0;
        for (i = m; i <= n; i++) {
            printf("%d ", i);
            sum += i;
        }        
        printf("Sum=%d\n", sum);
        scanf("%d%d", &m, &n);
        
    } while (m > 0 && n > 0);
                
    return 0;
}
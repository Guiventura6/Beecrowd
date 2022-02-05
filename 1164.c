/*  
    @autor: Guiventura6;
    @data: 05/02/2022;
    @Problema: Perfect Number;
*/
#include <stdio.h>

int main() {

    int i, j, x, n, sum;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        sum = 0;
        for (j = 1; j < x; j++) {
            if (x % j == 0) {
                sum += j;
            }                        
        }

        if (sum == x)
            printf("%d eh perfeito\n", x);
        else
            printf("%d nao eh perfeito\n", x);                
    }
            
    return 0;
}
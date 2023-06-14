/*  
    @autor: Guiventura6;
    @data: 06/02/2022;
    @Problema: Prime Number;
*/
#include <stdio.h>

int main() {

    int i, j, n, x, cont;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &x);

        cont = 0;
        for (j = 2; j < x; j++) {
            if (x % j == 0) {
                cont++;
            }            
        }

        if (cont != 0)                   
            printf("%d nao eh primo\n", x);
        else 
            printf("%d eh primo\n", x); 
    }            
    return 0;
}

/*  
    @autor: Guiventura6;
    @data: 26/01/2022;
    @Problema: Divisors I;
*/
#include <stdio.h>

int main() {

    int i, n;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d\n", i);
        }       
    }
    
    return 0;
}
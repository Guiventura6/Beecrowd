/*  
    @autor: Guiventura6;
    @data: 24/01/2022;
    @Problema: Simple Factorial;
*/
#include <stdio.h>

int main () {

    int i, n, sum;

    scanf("%d", &n);

    sum = 1;
    for (i = 1; i <= n; i++) {
       sum *= i;
    }
    
    printf("%d\n", sum);
    
    return 0;
}
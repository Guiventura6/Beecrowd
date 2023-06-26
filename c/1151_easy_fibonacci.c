/*
    @autor: Guiventura6;
    @data: 31/01/2022;
    @Problema: Easy Fibonacci;
*/
#include <stdio.h>

int main() {

    int i = 0, j = 1, n, sum = 0, cont = 0;

    scanf("%d", &n);
    
    printf("%d %d ", i, j);
    while (cont <= n-3) {
        sum = i+j;                                    
        if(cont != n-3)
            printf("%d ", sum);
        else
            printf("%d", sum);
        cont++;        
        i = j;
        j = sum;             
    }
    printf("\n");

    return 0;
}

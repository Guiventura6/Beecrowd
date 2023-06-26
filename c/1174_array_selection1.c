/*
    @autor: Guiventura6;
    @data: 09/02/2022;
    @Problema: Array Selection 1;
*/
#include <stdio.h>
#define TAMANHO 100

int main () {

    int i;
    double n, a[TAMANHO] = {0.0};

    for (i = 0; i < TAMANHO; i++) {
        scanf("%lf", &n);
        a[i] = n;
    }

    for (i = 0; i < TAMANHO; i++) {
        if (a[i] <= 10.0)
            printf("A[%d] = %.1lf\n", i, a[i]);                                    
    }
                
    return 0;
}
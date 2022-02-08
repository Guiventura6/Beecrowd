/*
    @autor: Guiventura6;
    @data: 08/02/2022;
    @Problema: Array fill 1;
*/
#include <stdio.h>
#define TAMANHO 10

int main() {

    int i, x, n[TAMANHO];

    scanf("%d", &x);

    n[0] = x;
    for (i = 1; i < TAMANHO; i++) {
        n[i] = (n[i - 1]) * 2;
    }

    for (i = 0; i < TAMANHO; i++) {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}

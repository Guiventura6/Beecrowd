/*
    @autor: Guiventura6;
    @data: 03/02/2022;
    @Problema: Exceeding Z;
*/
#include <stdio.h>

int i, x, z, sum, cont = 0;

int main()
{

    scanf("%d", &x);
    scanf("%d", &z);

    while (z <= x) { 
        scanf("%d", &z);
    }

    sum = x;    
    while (sum <= z) {
        sum += x + 1;
        cont++;        
    }

    printf("%d\n", cont);

    return 0;
}
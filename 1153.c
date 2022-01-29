/*  
    @autor: Guiventura6;
    @data: 29/01/2022;
    @Problema: Simple Factorial;
*/
#include <stdio.h>
/* Funcao recursiva para fatoriais */

long fatorial(long);

int main () {

    long n;
    
    scanf("%d", &n);    

    printf("%d\n", fatorial(n));

    return 0;
}
/* Definição recursiva da funcao fatorial */
long fatorial(long numero) {
    if (numero <= 1)
        return 1;
    else
        return (numero * fatorial(numero - 1));
}
/*
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Simple Calculate;
*/
#include <stdio.h>

int main(){
    
    int codePoduct1, codePoduct2, unitP1, unitP2;
    double priceP1, priceP2, valueToPay;

    scanf("%d%d%lf", &codePoduct1, &unitP1, &priceP1);
    scanf("%d%d%lf", &codePoduct2, &unitP2, &priceP2);

    valueToPay = unitP1 * priceP1 + unitP2 * priceP2;

    printf("VALOR A PAGAR: R$ %.2lf\n", valueToPay);

    return 0;
}

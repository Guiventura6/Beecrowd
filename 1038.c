/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Snack;
*/
#include <stdio.h>

int main(){

    int codProduct, amount;
    double total;

    scanf("%d%d", &codProduct, &amount);

    switch (codProduct) {
    case 1:
        //Cachorro Quente - Price: 4.00
        total = amount * 4.00;
        break;
    case 2: 
        //X-Salada - Price: 4.50
        total = amount * 4.50;
        break;
    case 3: 
        //X-Bacon - Price: 5.00
        total = amount * 5.00;
        break;
    case 4: 
        //Torrada Simples - Price: 2.00
        total = amount * 2.00;
        break;
    case 5: 
        //Refrigerante - Price: 1.50
        total = amount * 1.50;
        break;    
    default:
        break;
    }
    
    printf("Total: R$ %.2lf\n", total);

    return 0;
}
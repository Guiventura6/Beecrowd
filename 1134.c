/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Type of Fuel;
*/
#include <stdio.h>

int main () {
    
    int typeFuel, alcohol, gasoline, diesel;

    alcohol = 0;
    gasoline = 0;
    diesel = 0;

    scanf("%d", &typeFuel);

    while (typeFuel != 4) {

        if (typeFuel == 1) {
            alcohol++;
        } else if (typeFuel == 2) {
            gasoline++;
        } else if(typeFuel == 3) {
            diesel++;
        }        
        scanf("%d", &typeFuel);
    }
    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);
        
    return 0;
}

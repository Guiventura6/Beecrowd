/*  
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Consumption;
*/
#include <stdio.h>

int main(){

    int totalDistance;
    double spentFuelTotal;

    scanf("%d", &totalDistance);
    scanf("%lf", &spentFuelTotal);

    double averageConsumption = totalDistance / spentFuelTotal;

    printf("%.3lf km/l\n", averageConsumption);
    
    return 0;
}


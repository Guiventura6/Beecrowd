/*  
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Fuel Spent;
*/
#include <stdio.h>
#define carConsumption 12.0

int main(){

    int spentTime, averageSpeed;

    scanf("%d", &spentTime);
    scanf("%d", &averageSpeed);

    int distance = spentTime * averageSpeed;
    double totalLiters = distance / carConsumption;

    printf("%.3lf\n", totalLiters);
    
    return 0;
}

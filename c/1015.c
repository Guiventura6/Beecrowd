/*  
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Distance Between Two Points;
*/
#include <stdio.h>
#include <math.h>

int main(){
    
    double x1, y1, x2, y2;

    scanf("%lf%lf", &x1, &y1);
    scanf("%lf%lf", &x2, &y2);

    double distance = sqrt(pow((x2 - x1), 2.0) + pow((y2 - y1), 2.0));

    printf("%.4lf\n", distance);
    
    return 0;
}
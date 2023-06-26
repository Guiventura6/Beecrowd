/*
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Sphere;
*/
#include <stdio.h>
#include <math.h>

#define PI 3.14159;

int main(){
    
    double radius, volume;

    scanf("%lf", &radius);
        
    volume = 4.0 / 3 * pow(radius, 3) * PI;

    printf("VOLUME = %.3lf\n", volume);

    return 0;
}
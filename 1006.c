/*
    @autor: Guiventura6;
    @data: 18/01/2022;
    @Problema: Average 2;
*/
#include <stdio.h>

int main(){

    double a, b, c, average;

    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);

    average = (a * 2 + b * 3 + c * 5)/ 10.0;

    printf("MEDIA = %.1lf\n", average);
    
    return 0;
}
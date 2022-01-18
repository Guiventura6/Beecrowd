/*
    @autor: Guiventura6;
    @data: 18/01/2022;
    @Problema: Average 1;
*/
#include <stdio.h>

int main(){
    
    double a, b, average;

    scanf("%lf", &a);
    scanf("%lf", &b);

    average = (a * 3.5 + b * 7.5) / 11.0;

    printf("MEDIA = %.5lf\n", average);
    
    return 0;
}
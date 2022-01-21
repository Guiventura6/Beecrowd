/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Triangle;
*/
#include <stdio.h>

int main(){
    
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {
        double perimetroTriangle = a + b + c;
        printf("Perimetro = %.1lf\n", perimetroTriangle);
    } else {
        double areaTrapezium = (a + b) * c / 2.0;
        printf("Area = %.1lf\n", areaTrapezium);
    }

    return 0;
}
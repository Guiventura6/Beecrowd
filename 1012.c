/*  
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Area;        
*/
#include <stdio.h>
#define PI 3.14159

int main(){
    
    double a, b, c;

    scanf("%lf%lf%lf", &a, &b, &c);

    double areaTriangle = a * c / 2.0;
    double areaCircle = PI * c * c;
    double areaTrapezium = (a + b) * c / 2.0;
    double areaSquare = b * b;
    double areaRectangle = a * b;

    printf("TRIANGULO: %.3lf\n", areaTriangle);
    printf("CIRCULO: %.3lf\n", areaCircle);
    printf("TRAPEZIO: %.3lf\n", areaTrapezium);
    printf("QUADRADO: %.3lf\n", areaSquare);
    printf("RETANGULO: %.3lf\n", areaRectangle);
        
    return 0;
}
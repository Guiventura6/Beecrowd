/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Coordinates of a Point;
*/
#include <stdio.h>

int main(){

    double x, y;

    scanf("%lf%lf", &x, &y);

    if (x > 0 && y > 0)  {
        printf("Q1\n");
    } else if (x < 0 && y > 0){
        printf("Q2\n");
    } else if (x < 0 && y < 0) {
        printf("Q3\n");
    } else if (x > 0 && y < 0) {
        printf("Q4\n");
    } else if (x == 0 && y == 0) {
        printf("Origem\n");
    } else if (x == 0) {
        printf("Eixo Y\n");
    } else {
        printf("Eixo X\n");
    }
    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 25/01/2022;
    @Problema: Ages;
*/
#include <stdio.h>

int main () {
    
    int age, cont, sum;
    double average;

    scanf("%d", &age);

    cont = 0;
    sum = 0;
    while (age > 0) {

        sum += age;
        cont++;
        scanf("%d", &age);
    }

    if (cont != 0) {
        average = (double)sum / cont;
        printf("%.2lf\n", average);
    }
            
    return 0;
}


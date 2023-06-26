/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Positives and Average;
*/
#include <stdio.h>

int main () {

    double number[10], average, sum = 0.0;
    int i, cont = 0;

    //reading
    for (i = 0; i < 6; i++) {
        scanf("%lf", &number[i]);        
    }
    
    //processing
    for (i = 0; i < 6; i++) {
        if (number[i] > 0) {
            sum += number[i];
            cont++;
        }        
    }

    printf("%d valores positivos\n", cont);
    average = sum / cont;

    printf("%.1lf\n", average);
        
    return 0;
}
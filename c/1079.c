/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Weighted Averages;
*/
#include <stdio.h>

int main () {
    
    int i, x;
    double n1, n2, n3, average;
    
    scanf("%d", &x);
    for (i = 0; i < x; i++) {
        scanf("%lf%lf%lf", &n1, &n2, &n3);        
        average = (n1 * 2 + n2 * 3 + n3 * 5) / 10.0;
        printf("%.1lf\n", average);
    }
    
    return 0;
}
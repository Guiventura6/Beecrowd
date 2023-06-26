/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Dividing X by Y;
*/
#include <stdio.h>

int main () {
    
    int i, n, x, y;

    double division;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d%d", &x, &y);
        if (y == 0) {
            printf("divisao impossivel\n");
        } else {
            division = (double) x / y;
            printf("%.1lf\n", division);
        }        
    }

    return 0;
}
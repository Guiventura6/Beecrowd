/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Multiples of 13;
*/
#include <stdio.h>

int main () {
    
    int i, x, y;

    scanf("%d%d", &x, &y);

    int aux;
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    int sum = 0;
    for (i = x; i <= y; i++) {
        if (i % 13 != 0) {
            sum += i;
        }
    }
    printf("%d\n", sum);    
    
    return 0;
}
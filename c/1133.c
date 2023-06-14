/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Rest of a Division;
*/
#include <stdio.h>

int main() {

    int i, x, y;

    scanf("%d%d", &x, &y);

    int aux;
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    
    for (i = x + 1; i < y; i++) {
        if (i % 5 == 2 || i % 5 == 3) {            
            printf("%d\n", i);    
        }
    }
    
    return 0;
}
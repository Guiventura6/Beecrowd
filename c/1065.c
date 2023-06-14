/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Even Between five Numbers;
*/
#include <stdio.h>

int main () {
    
    int i, number[10], cont = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &number[i]);
    }

    for (i = 0; i < 5; i++) {
        if (number[i] % 2 == 0) {
            cont++;
        }        
    }

    printf("%d valores pares\n", cont);
            
    return 0;
}
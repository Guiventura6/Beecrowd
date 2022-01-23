/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Ascending and Descending;
*/
#include <stdio.h>

int main () {
    
    int x, y;

    scanf("%d%d", &x, &y);

    while (x != y) {
        if (x > y) {
            printf("Decrescente\n");
        } else {
            printf("Crescente\n");
        }        
        scanf("%d%d", &x, &y);
    }

    return 0;
}
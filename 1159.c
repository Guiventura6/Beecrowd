/*  
    @autor: Guiventura6;
    @data: 27/01/2022;
    @Problema: Sum of Consecutive Even Numbers;
*/
#include <stdio.h>

int main () {
    
    int i, x, sum = 0;

    scanf("%d", &x);

    while (x != 0) {
        
        if (x % 2 != 0) {
            x++;
        }

        sum = 5 * x + 20;

        printf("%d\n", sum);
        scanf("%d", &x);
    }

    return 0;
}
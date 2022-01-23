/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Highest and Position;
*/
#include <stdio.h>

int main() {
    
    int i, n, highest, pos;

    highest = 0;
    for (i = 1; i <= 100; i++) {
        scanf("%d", &n);
        if (n > highest) {
            highest = n;
            pos = i;
        }        
    }
    printf("%d\n", highest);
    printf("%d\n", pos);
    
    return 0;
}
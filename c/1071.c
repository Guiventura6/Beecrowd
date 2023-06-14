/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Six Odd Numbers 1;
*/
#include <stdio.h>

int  main () {

    int i, x, y;

    scanf("%d", &x);
    scanf("%d", &y);    

    int temp;
    if (x > y) {
        temp = x;
        x = y;
        y = temp;
    }
    
    int sum = 0;
    for (i = x + 1; i < y; i++) {
        if (i % 2 != 0) {
            sum += i;
        }        
    }
    printf("%d\n", sum);
        
    return 0;
}

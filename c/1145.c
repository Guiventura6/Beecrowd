/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Logical Sequence 2;
*/
#include <stdio.h>

int  main () {
    
    int i, j, x, y, cont = 1;

    scanf("%d%d", &x, &y);
    
    for (i = 1; i <= y; i++) {
       printf("%d", i);
       if (i % x == 0) {
           printf("\n");
       } else {
           printf(" ");
       }       
    }
    
    return 0;
}
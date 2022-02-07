/*  
    @autor: Guiventura6;
    @data: 07/02/2022;
    @Problema: Array Replacement I;
*/
#include <stdio.h>

int main() {

    int i, x[10];

    for (i = 0; i < 10; i++) {
        scanf("%d", &x[i]);        
    }

    for (i = 0; i < 10; i++) {
        if (x[i] <= 0) 
            x[i] = 1;                
        printf("X[%d] = %d\n", i, x[i]);
    }
            
    return 0;
}

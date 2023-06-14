/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Sequence IJ 3;
*/
#include <stdio.h>

int main() {

    int i, j, n = 7;

    for (i = 1; i <= 9; i += 2) { 
        for (j = n; j >= n-2; j--) {
            printf("I=%d J=%d\n", i, j);
        }
        n += 2;               
    }
    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Multiplication Table;
*/
#include <stdio.h>

int main() {
    
    int i, n;

    scanf("%d", &n);

    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", i, n, i * n);
    }
        
    return 0;
}
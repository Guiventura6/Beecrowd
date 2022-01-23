/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Logical Sequence;
*/
#include <stdio.h>

int main () {
    
    int i, j, n, x, a, b, c;

    scanf("%d", &n);

    x = 1;    
    a = 1;
    b = 2;
    c = 2;
    
    for (i = 0; i < n; i++) {
        printf("%d %d %d\n", x, x*x, x*x*x);
        for (j = 0; j < 1; j++) {
            printf("%d %d %d\n",a, b, c);
            a++;
            b = a * a + 1;
            c = a * b - x;
        }    
        x++;
    }

    return 0;
}
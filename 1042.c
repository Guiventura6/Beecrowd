/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Simple Sort;
*/
#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    if (a < b && a < c) {
        printf("%d\n", a);
        if (b < c) {
            printf("%d\n", b);
            printf("%d\n", c);
        } else {
            printf("%d\n", c);
            printf("%d\n", b);
        }        
    } else if (b < c) {
        printf("%d\n", b);
        if (c < a) {
            printf("%d\n", c);
            printf("%d\n", a);

        } else {
            printf("%d\n", a);
            printf("%d\n", c);
        }         
    } else {
        printf("%d\n", c);
        if (b < a) {
            printf("%d\n", b);
            printf("%d\n", a);
        } else {
            printf("%d\n", a);
            printf("%d\n", b);
        }        
    }
    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}

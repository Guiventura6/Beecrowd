/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Positive Numbers;
*/
#include <stdio.h>

int main() {

    int i, cont = 0;
    double n;

    for (i = 0; i < 6; i++)
    {
        scanf("%lf", &n);
        if(n > 0){
            cont++;
        }
    }
    printf("%d valores positivos\n", cont);
            
    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: The Greatest;        
*/
#include <stdio.h>

int main(){

    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    int maiorAB = (a + b + abs(a -b)) / 2;
    
    int theGreatest = maiorAB;
    if (theGreatest < c)
    {
        theGreatest = c;
    }

    printf("%d eh o maior\n", theGreatest);

    return 0;
}
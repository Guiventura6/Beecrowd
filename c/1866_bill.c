/*  
    @autor: Guiventura6;
    @data: 31/01/2022;
    @Problema: Bill;
*/

#include <stdio.h>

int main()
{

    int i, n, x;

    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &x);
        if (x % 2 != 0)
            printf("%d\n", 1);
        else
            printf("%d\n", 0);
    }

    return 0;
}

/*  
    @autor: Guiventura6;
    @data: 29/01/2022;
    @Problema: Summing Consecutive Integers;
*/
#include <stdio.h>

int main()
{
    int a, n, i, sum=0;
    
    scanf("%d%d", &a, &n);

    while(n<=0)
        scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        sum+=a;
        a++;
    }
    printf("%d\n",sum);
    return 0;
}
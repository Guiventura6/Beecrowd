/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Age in Days;
*/

#include <stdio.h>

int main(){
    
    int ageInDays, years, months, days, rest;

    scanf("%d", &ageInDays);

    years = ageInDays / 365;    
    rest = ageInDays % 365;    
    months = rest / 30;    
    days = rest % 30;

    printf("%d ano(s)\n", years);    
    printf("%d mes(es)\n", months);
    printf("%d dia(s)\n", days);
    
    return 0;
}
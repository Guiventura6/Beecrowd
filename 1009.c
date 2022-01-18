/*
    @autor: Guiventura6;
    @data: 18/01/2022;
    @Problema: Salary with Bonus;
*/
#include <stdio.h>

int main(){
    
    char name[10];
    double fixedSalary, valueSold, total;

    scanf("%s", name);
    scanf("%lf", &fixedSalary);
    scanf("%lf", &valueSold);

    total = fixedSalary +   valueSold * 0.15;

    printf("TOTAL = R$ %.2lf\n", total);
    
    return 0;
}
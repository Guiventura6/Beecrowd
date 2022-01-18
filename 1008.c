/*
    @autor: Guiventura6;
    @data: 18/01/2022;
    @Problema: Salary;
*/

#include <stdio.h>

int main(){
    
    int number, workedHours;
    double amountPerHour, salary;

    scanf("%d", &number);
    scanf("%d", &workedHours);
    scanf("%lf", &amountPerHour);

    salary = workedHours * amountPerHour;

    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2lf\n", salary);
        
    return 0;
}
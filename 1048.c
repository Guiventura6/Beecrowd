/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Salary Increase;
*/
#include <stdio.h>

int main(){
    
    double salary, moneyEarned, newSalary;
    int percentage;

    scanf("%lf", &salary);

    newSalary = salary;
    if (salary > 0 && salary <= 400.00) {   
        percentage = 15;
    } else if (salary <= 800.00) {
        percentage = 12;        
    } else if (salary <= 1200.00) {
        percentage = 10;
    } else if (salary <= 2000.00) {
        percentage = 7;
    } else {
        percentage = 4;
    }
    
    moneyEarned = salary * percentage / 100.0;
    newSalary += moneyEarned;

    printf("Novo salario: %.2lf\n", newSalary);
    printf("Reajuste ganho: %.2lf\n", moneyEarned);
    printf("Em percentual: %d %%\n", percentage);
        
    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Taxes;
*/
#include <stdio.h>

int main () {
    
    double salary, totalTax = 0.0;

    scanf("%lf", &salary);

    if (salary < 2000.00) {
        printf("Isento\n");
    } else {
        if (salary <= 3000.00) {
            totalTax = (salary - 2000.00) * 0.08;
        } else if (salary <= 4500.00) {
            totalTax = (salary - 3000.00) * 0.18 + 1000.00 * 0.08;
        } else {
            totalTax = (salary - 4500.00) * 0.28 + 1500.00 * 0.18 + 1000.00 * 0.08;
        }
        printf("R$ %.2lf\n", totalTax);
    }

    return 0;
}
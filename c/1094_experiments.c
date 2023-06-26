/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Experiments;
*/
#include <stdio.h>

int main () {
    
    int i, n, amount, totalC = 0, totalR = 0, totalS = 0;
    char type;

    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d *s", &amount);
        scanf("%c", &type);

        if (type == 'C') {
            totalC += amount;
        } else if (type == 'R') {
            totalR += amount;
        }else if (type == 'S') {
            totalS += amount;
        }    
    }
    
    int totalAnimals = totalC + totalR + totalS;

    double perC = totalC * 100.0  / totalAnimals;
    double perR = totalR * 100.0  / totalAnimals;
    double perS = totalS * 100.0  / totalAnimals;
    
    printf("Total: %d cobaias\n", totalAnimals);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    printf("Percentual de coelhos: %.2lf %%\n", perC);
    printf("Percentual de ratos: %.2lf %%\n", perR);
    printf("Percentual de sapos: %.2lf %%\n", perS);
    
    return 0;
}

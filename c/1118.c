/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Several Scores with Validation;
*/
#include <stdio.h>

int main () {
    
    double score1, score2;
    int op;

    do {    

        scanf("%lf", &score1);
        while (score1 < 0.0 || score1 > 10.0)  {
            printf("nota invalida\n");
            scanf("%lf", &score1);
        }

        scanf("%lf", &score2);
        while (score2 < 0.0 || score2 > 10.0)  {
            printf("nota invalida\n");
            scanf("%lf", &score2);
        }

        double average = (score1 + score2) / 2.0;
        printf("media = %.2lf\n", average);

        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d", &op);
        while (op != 1 && op != 2) {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &op);
        }
        
    } while (op != 2);
        
    return 0;
}
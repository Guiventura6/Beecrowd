/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Score Validation;
*/
#include <stdio.h>

int main () {
    
    double score1, score2;

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
    
    return 0;
}
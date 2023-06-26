/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Even, Odd, Positive and Negative;
*/
#include <stdio.h>

int main () {
    
    int i, n, evens = 0, odds = 0, positives = 0, negatives = 0;

    for (i = 0; i < 5; i++) {
        scanf("%d", &n);
        if (n % 2 == 0) {
            evens++;
            if (n > 0) {
                positives++;
            } else if (n < 0){
                negatives++;
            }            
        } else {
            odds++;
            if (n > 0) {
                positives++;
            } else if (n < 0) {
                negatives++;
            }           
        }
    }
    printf("%d valor(es) par(es)\n", evens);
    printf("%d valor(es) impar(es)\n", odds);  
    printf("%d valor(es) positivo(s)\n", positives);  
    printf("%d valor(es) negativo(s)\n", negatives);  
    
    return 0;
}

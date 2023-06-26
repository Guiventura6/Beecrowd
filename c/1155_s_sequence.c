/*
    @autor: Guiventura6;
    @data: 02/02/2022;
    @Problema: S Sequence;
*/
#include <stdio.h>

int main() {

    int i;
    double sum = 1;

    for (i = 2; i <= 100; i++) {
        sum += 1.0/i;        
    }            
    printf("%.2lf\n", sum);

    return 0;
}


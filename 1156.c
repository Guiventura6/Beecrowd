/*
    @autor: Guiventura6;
    @data: 04/02/2022;
    @Problema: S Sequence 2;
*/
#include <stdio.h>

int main() {

    int i, j = 2;
    double s = 1.0;

    for (i = 3; i <= 39; i+=2) {
        s += (double)i/j;        
        j*= 2.0;
    }            
    printf("%.2lf\n", s);

    return 0;
}
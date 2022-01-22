/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Triangle Types;
*/
#include <stdio.h>

int main() {
    
    double a, b, c, n1, n2, n3;

    scanf("%lf%lf%lf", &a, &b, &c);

    if (a > b && a > c) {
        n1 = a;
        if (b > c) {
            n2 = b;
            n3 = c;
        } else {
            n3 = c;
            n2 = b;
        }        
    } else {
        if (b > c)  {
            n1 = b;
            if (c > a) {
                n2 = c;
                n3 = a;
            } else {
                n2 = a;
                n3 = c;
            }
        } else {
            n1 = c;
            if (b > a)
            {
                n2 = b;
                n3 = a;
            } else {
                n2 = a;
                n3 = b;
            }            
        }
    }
    
    if (n1 >= n2 + n3) {
        printf("NAO FORMA TRIANGULO\n");
    } else {
        if (n1 * n1 == n2 * n2 + n3 * n3) {
            printf("TRIANGULO RETANGULO\n");            
        } else if (n1 * n1 > n2 * n2 + n3 * n3) {
            printf("TRIANGULO OBTUSANGULO\n");
        } else {
            printf("TRIANGULO ACUTANGULO\n");
        }

        if (n1 == n2 && n1 == n3) {
            printf("TRIANGULO EQUILATERO\n");
        } else if (n1 == n2 || n1 == n3 || n2 == n3) {
            printf("TRIANGULO ISOSCELES\n");
        }                        
    }

    return 0;
}
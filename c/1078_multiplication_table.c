/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Multiplication Table;
*/
#include <stdio.h>

int main() {
    
    int i, n;

    scanf("%d", &n);

    if(n > 1 && n < 1000) {
        
        for (i = 1; i <= 10; i++) {
            printf("%d x %d = %d\n", i, n, i * n);
        }
    } else {
        printf("Number out of range!\n");
        printf("Enter a number in the range [1 < N < 1000]\n");
    }

    return 0;
}
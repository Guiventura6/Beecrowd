/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Six Odd Numbers;
*/
#include <string.h>

int main () {
    
    int i, number;

    scanf("%d", &number);

    for ( i = 0; i < 6; i++) {
        if (number % 2 == 0) {
            number += 1;
        }
        printf("%d\n", number);
        number += 2;        
    }
                    
    return 0;
}
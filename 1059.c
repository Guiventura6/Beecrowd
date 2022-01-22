/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Even Numbers;
*/
#include <string.h>

int main () {
    
    int i;
    
    for (i = 1; i <= 100; i++) {
        if (i % 2 == 0) 
            printf("%d\n", i);                        
    }
            
    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Time Conversion;    
*/

#include <stdio.h>

int main(){
    
    int duration, hours, minutes, seconds, rest;

    scanf("%d", &duration);

    hours = duration / 3600;
    rest = duration % 3600;
    minutes = rest / 60;
    seconds = rest % 60;
        
    printf("%d:%d:%d\n", hours, minutes, seconds);
    
    return 0;
}

/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Game Time;
*/
#include <stdio.h>

int main(){
    
    int startTime, endTime;

    scanf("%d%d", &startTime, &endTime);

    int duration;
    if (startTime < endTime) {
        duration = endTime - startTime;
    } else {
        duration = (24 - startTime + endTime);
    }

    printf("O JOGO DUROU %d HORA(S)\n", duration);
        
    return 0;
}
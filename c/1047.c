/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Game Time with Minutes;
*/
#include <stdio.h>

int main () {
    
    int initialHour, initialMinute, finalHour, finalMinute;

    scanf("%d%d%d%d", &initialHour, &initialMinute, &finalHour, &finalMinute);

    int initialDurationMin = initialHour * 60 + initialMinute;
    int finalDurationMin = finalHour * 60 + finalMinute;

    int totalDuration;
    if (initialDurationMin < finalDurationMin) {
       totalDuration = finalDurationMin - initialDurationMin;        
    } else {
        totalDuration = (24 * 60 - initialDurationMin + finalDurationMin);
    }
   
    int hours = totalDuration / 60;
    int minutes = totalDuration % 60;
    
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

    return 0;
}
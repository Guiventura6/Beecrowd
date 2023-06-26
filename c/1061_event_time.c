/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Event Time;
*/
#include <stdio.h>

int main () {
    
    int initialDay, initialHour, initialMinute, initialSecond, finalDay, finalHour, finalMinute, finalSecond;    

    scanf("%*s %d", &initialDay);
    scanf("%d %*s %d %*s %d", &initialHour, &initialMinute, &initialSecond);     
            
    scanf("%*s %d", &finalDay);    
    scanf("%d %*s %d %*s %d", &finalHour, &finalMinute, &finalSecond);   

    int initialDurationSec = initialDay * 86400  + initialHour * 3600 + initialMinute * 60 + initialSecond;
    int finalDurationSec = finalDay * 86400  + finalHour * 3600 + finalMinute * 60 + finalSecond;

    int totalDuration;
    if (initialDurationSec < finalDurationSec) {
       totalDuration = finalDurationSec - initialDurationSec;        
    } else {
        totalDuration = 86400 - initialDurationSec + finalDurationSec;
    }

    int resto;
    int totalDays = totalDuration / 86400;
    resto = totalDuration % 86400;
    int totalHours = resto / 3600;    
    resto = resto % 3600; 
    int totalMinutes = resto / 60;
    int totalSeconds = resto % 60;

    printf("%d dia(s)\n", totalDays);
    printf("%d hora(s)\n", totalHours);
    printf("%d minuto(s)\n", totalMinutes);
    printf("%d segundo(s)\n", totalSeconds);
    
    return 0;
}
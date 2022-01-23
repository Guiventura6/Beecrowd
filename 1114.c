/*  
    @autor: Guiventura6;
    @data: 23/01/2022;
    @Problema: Fixed Password;
*/
#include <stdio.h>

int main () {
    
    int password;

    scanf("%d", &password);

    while (password != 2002) {
        printf("Senha Invalida\n");
        scanf("%d", &password);
    }
    
    printf("Acesso Permitido\n");
    
    return 0;
}
/*  
    @autor: Guiventura6;
    @data: 20/01/2022;
    @Problema: Banknotes;    
*/
#include <stdio.h>

int main(){
    
    int amount, notesOf100, notesOf50, notesOf20, notesOf10, notesOf5, notesOf2, notesOf1, resto;    
    
    scanf("%d", &amount);

    notesOf100 = amount / 100;
    resto = amount % 100;
    notesOf50 = resto / 50;
    resto = resto % 50;
    notesOf20 = resto / 20;
    resto = resto % 20;
    notesOf10 = resto / 10;
    resto = resto % 10;
    notesOf5 = resto / 5;
    resto = resto % 5;
    notesOf2 = resto / 2;
    notesOf1 = resto % 2;

    printf("%d\n", amount);
    printf("%d nota(s) de R$ 100,00\n", notesOf100);
    printf("%d nota(s) de R$ 50,00\n", notesOf50);
    printf("%d nota(s) de R$ 20,00\n", notesOf20);
    printf("%d nota(s) de R$ 10,00\n", notesOf10);
    printf("%d nota(s) de R$ 5,00\n", notesOf5);
    printf("%d nota(s) de R$ 2,00\n", notesOf2);
    printf("%d nota(s) de R$ 1,00\n", notesOf1);
            
    return 0;
}
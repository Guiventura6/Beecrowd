/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Banknotes and Coins;    
*/
#include <stdio.h>

int main(){
    
    int notes, coins, notesOf100, notesOf50, notesOf20, notesOf10, notesOf5, notesOf2; 
    int coin1, coin50, coin25, coin10, coin05, coin01, resto;    
    double amount;
    
    scanf("%lf", &amount);
    notes = amount;

    notesOf100 = notes / 100;
    resto = notes % 100;
    notesOf50 = resto / 50;
    resto = resto % 50;
    notesOf20 = resto / 20;
    resto = resto % 20;
    notesOf10 = resto / 10;
    resto = resto % 10;
    notesOf5 = resto / 5;
    resto = resto % 5;
    notesOf2 = resto / 2;
    //COINS
    coin1 = resto % 2;
    coins = (amount - notes) * 100; // Working with integers
    coin50 = coins / 50;
    resto = coins % 50;
    coin25 = resto / 25;
    resto = resto % 25;
    coin10 = resto / 10;
    resto = resto % 10;
    coin05 = resto / 5;
    coin01 = resto % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", notesOf100);
    printf("%d nota(s) de R$ 50.00\n", notesOf50);
    printf("%d nota(s) de R$ 20.00\n", notesOf20);
    printf("%d nota(s) de R$ 10.00\n", notesOf10);
    printf("%d nota(s) de R$ 5.00\n", notesOf5);
    printf("%d nota(s) de R$ 2.00\n", notesOf2);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", coin1);
    printf("%d moeda(s) de R$ 0.50\n", coin50);
    printf("%d moeda(s) de R$ 0.25\n", coin25);
    printf("%d moeda(s) de R$ 0.10\n", coin10);
    printf("%d moeda(s) de R$ 0.05\n", coin05);
    printf("%d moeda(s) de R$ 0.01\n", coin01);
        
    return 0;
}
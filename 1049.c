/*  
    @autor: Guiventura6;
    @data: 22/01/2022;
    @Problema: Animal;
*/
#include <stdio.h>
#include <string.h>

int main () {
    
    char word[20];

    scanf("%s", word);    

    if (strcmp(word, "vertebrado") == 0) {
        scanf("%s", word);
        if (strcmp(word, "ave") == 0) {
            scanf("%s", word);
            if (strcmp(word, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(word, "onivoro") == 0) {
                printf("pomba\n");
            }            
        } else if (strcmp(word, "mamifero") == 0) {
            scanf("%s", word);
            if (strcmp(word, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(word, "herbivoro") == 0) {
                printf("vaca\n");
            }            
        }           
    } else if (strcmp(word, "invertebrado") == 0) {
        scanf("%s", word);
        if (strcmp(word, "inseto") == 0) {
            scanf("%s", word);
            if (strcmp(word, "hematofago") == 0) {
                printf("pulga\n");
            } else if (strcmp(word, "herbivoro") == 0) {
                printf("lagarta\n");
            }            
        } else if (strcmp(word, "anelideo") == 0) {
            scanf("%s", word);
            if (strcmp(word, "hematofago") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(word, "onivoro") == 0) {
                printf("minhoca\n");
            }            
        }           
    }            
    return 0;
}
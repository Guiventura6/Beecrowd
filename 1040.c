/*  
    @autor: Guiventura6;
    @data: 21/01/2022;
    @Problema: Average 3;
*/
#include <stdio.h>

int main(){
    
    double n1, n2, n3, n4, media, exam, newMedia;    

    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);

    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10.0;    

    printf("Media: %.1lf\n", media);    
    if(media < 5.0) 
    {
        printf("Aluno reprovado.\n");
    } 
    else if (media >= 7.0) 
    {
        printf("Aluno aprovado.\n");
    } 
    else 
    {   //In exam
        printf("Aluno em exame.\n");
        scanf("%lf", &exam);
        printf("Nota do exame: %.1f\n", exam);
        //New Media
        newMedia = (media + exam) / 2.0;
        if (newMedia >= 5.0 ) 
        {
            printf("Aluno aprovado.\n");
        } 
        else 
        {
            printf("Aluno reprovado.\n");
        }        
        printf("Media final: %.1lf\n", newMedia);        
    }
    return 0;
}